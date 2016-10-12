//Define msg
#define NO_NAME                      "serial_port_open: Serial port is not specified"
#define NO_BAUD                      "serial_port_open: Baudrate is not specified"
#define NO_ARG                       "serial_port_open: No data argument specified"
#define TOO_ARGC                     "serial_port_open: Too many arguments"
#define SERIAL_PORT_OPEN_OK          "serial_port_open: Open serial port successful"
#define SERIAL_PORT_OPEN_ERROR       "serial_port_open: Unable to open serial port"
#define ARG_ERROR                    "serial_port_open: Couldn't get term attributes"

#define SERIAL_PORT_CLOSE_OK         "serial_port_close: Close serial port sucessful"
#define SERIAL_PORT_CLOSE_ERROR      "serial_port_close: Unable to close serial port"

#define SERIAL_PORT_WRITE_BYTE_OK    "serial_port_write_byte: Sending byte to serial port successfully completed"
#define SERIAL_PORT_WRITE_BYTE_ERROR "serial_port_write_byte: Sending byte to serial port error"

#define SERIAL_PORT_WRITE_OK         "serial_port_write: Sending data to serial port successfully completed"
#define SERIAL_PORT_WRITE_ERROR      "serial_port_write: Sending data to serial port error"

#include <stdint.h>   // Standard types
#include <stdio.h>                // Standard input/output definitions
#include <string.h>               // String function definitions
#include <unistd.h>               // UNIX standard function definitions
#include <fcntl.h>                // File control definitions
#include <errno.h>                // Error number definitions
#include <termios.h>              // POSIX terminal control definitions
#include <sys/ioctl.h>

#include "mainwindow.h"
#include <QApplication>

int serial_port_open(const char *serial_port_name, int baudrate);
int serial_port_close(int fd);
int serial_port_write_byte( int fd, uint8_t byte);
int serial_port_write(int fd, const char* str);
int serial_port_read_until(int fd, char* buf, char until, int buf_max,int timeout);
int serial_port_flush(int fd);


int main(int argc, char *argv[])
{

    int activePort;

    if((activePort = serial_port_open("/dev/ttyACM0", 9600)) == -1)
    {
        printf("%s\n", SERIAL_PORT_OPEN_ERROR);
    }
    else
        printf("%s\n", SERIAL_PORT_OPEN_OK);

    serial_port_close(activePort);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

int serial_port_open(const char *serial_port_name, int baudrate)
{
    struct termios toptions;
    int fd;

    //fd = open(serialport, O_RDWR | O_NOCTTY | O_NDELAY);
    fd = open(serial_port_name, O_RDWR | O_NONBLOCK );

    if(fd == -1)
    {
        perror(SERIAL_PORT_OPEN_ERROR);
        return(-1);
    }

    //int iflags = TIOCM_DTR;
    //ioctl(fd, TIOCMBIS, &iflags);     // turn on DTR
    //ioctl(fd, TIOCMBIC, &iflags);    // turn off DTR

    if(tcgetattr(fd, &toptions) < 0)
    {
        perror(ARG_ERROR);
        return(-1);
    }

    //let you override switch below if needed
    speed_t baud = baudrate;
    switch(baud)
    {
        case 300    : baud = B300;    break;
        case 600    : baud = B600;    break;
        case 1200   : baud = B1200;   break;
        case 2400   : baud = B2400;   break;
        case 4800   : baud = B4800;   break;
        case 9600   : baud = B9600;   break;
        case 19200  : baud = B19200;  break;
        case 38400  : baud = B38400;  break;
        case 57600  : baud = B57600;  break;
        case 115200 : baud = B115200; break;
    }

    //set baudrate speed
    cfsetispeed(&toptions, baud);
    cfsetospeed(&toptions, baud);

    // 8N1
    toptions.c_cflag &= ~PARENB;
    toptions.c_cflag &= ~CSTOPB;
    toptions.c_cflag &= ~CSIZE;
    toptions.c_cflag |= CS8;

    // no flow control
    toptions.c_cflag &= ~CRTSCTS;

    //toptions.c_cflag &= ~HUPCL; // disable hang-up-on-close to avoid reset
    toptions.c_cflag |= CREAD | CLOCAL;  // turn on READ & ignore ctrl lines
    toptions.c_iflag &= ~(IXON | IXOFF | IXANY); // turn off s/w flow ctrl
    toptions.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG); // make raw
    toptions.c_oflag &= ~OPOST; // make raw

    // see: http://unixwiz.net/techtips/termios-vmin-vtime.html
    toptions.c_cc[VMIN]  = 0;
    toptions.c_cc[VTIME] = 0;

    //toptions.c_cc[VTIME] = 20;
    tcsetattr(fd, TCSANOW, &toptions);
    if(tcsetattr(fd, TCSAFLUSH, &toptions) < 0)
    {
         perror(ARG_ERROR);
         return -1;
    }
    return(fd);
}

int serial_port_close(int fd)
{
    return(close(fd));
}

int serial_port_write_byte( int fd, uint8_t byte)
{
    int n = write(fd,&byte,1);
    if( n!=1)
    {
        perror(SERIAL_PORT_WRITE_BYTE_ERROR);
        return -1;
    }
    return 0;
}

int serial_port_write(int fd, const char* str)
{
    int len = strlen(str);
    int n = write(fd, str, len);
    if(n != len)
    {
        perror(SERIAL_PORT_WRITE_ERROR);
        return -1;
    }
    return 0;
}

int serial_port_flush(int fd)
{
    sleep(2); //required to make flush work, for some reason
    return tcflush(fd, TCIOFLUSH);
}
