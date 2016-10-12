/* -----------------| Incluimos Librerias |------------------ */
#include <stdio.h>    //Libreria I/O                      //
#include <string.h>   //Libreria para el uso de cadenas   //
#include <unistd.h>   //Liberia estandar unix             //
#include <stdlib.h>   //libreria estandar                 //
#include <fcntl.h>    //Libreria para control de archivo  //
#include <errno.h>    //Libreria de definicion de errores //
#include <termios.h>  //POSIX  Terminal                   //
/* ---------------------------------------------------------- */

/* -------------------------| OpenPort ERRORS |------------------------------ */
#define NO_PORT     "OpenPort: Puerto no especificado:"                   //
#define NO_BAUD     "OpenPort: BaudRate no especificado:"                 //
#define NO_DATA     "OpenPort: No se han especificado datos para mandar:" //
#define TOO_ARGC    "OpenPort: Demasiados argumentos:"                    //
/* -------------------------| OpenPort MSGS |-------------------------------- */
#define NO_PORT_MSG "SerialPort -p \"Puerto serie\""
#define NO_BAUD_MSG "SerialPort -b \"BaudRate\""
#define NO_DATA_MSG "SerialPort -w \"DATOS\""
/* -------------------------------------------------------------------------- */

int openPort(int argc, char *argv[]);

/*----| Funcion Principal | ----*/
int main(int argc, char *argv[])
{
    openPort(argc, argv);
    return(0);
}
/*----| ****************** |----*/

/*----| Funcion que abre el puerto serie | ----*/
int openPort(int argc, char *argv[])
{
    if(argc < 1)
        printf( "%s %s\n", NO_PORT, NO_PORT_MSG );
    else if(argc < 2)
        printf( "%s %s\n", NO_BAUD, NO_BAUD_MSG );
    else if(argc > 3)
        printf( "%s\n", TOO_ARGC );
    
    struct termios newTermiosIO, oldTermiosIO;
    
    char *device =   argv[1]; //Variable para almacenar la ruta del puerto serie
    char *baudRate = argv[2]; //Variable para almacenar la velocidad en baudios por segundo
    int BAUD = atoi(baudRate);
    int fd; //Variable para el puerto
    
    //Abrimos el puerto en lectura y escritura
    fd = open(device, O_RDWR | O_NOCTTY | O_NDELAY);
    if (fd < 0) { perror(device); exit(-1); }
    
    tcgetattr(fd,&oldTermiosIO);                /* save current serial port settings */
    bzero(&oldTermiosIO, sizeof(newTermiosIO)); /* clear struct for new port settings */
    
    // Configure the serial port attributes:
    newTermiosIO.c_cflag =     BAUD | CS8 | CREAD; //BaudRate | 8n1 (8bit,no parity,1 stopbit|) | Enable receiving characters
    newTermiosIO.c_iflag =     IGNPAR;  //ignore bytes with parity errors
    newTermiosIO.c_oflag =     0; //Raw output
    newTermiosIO.c_lflag =     0;
    newTermiosIO.c_cc [VMIN] =  1;
    newTermiosIO.c_cc [VTIME] = 0;
    newTermiosIO.c_cc [VQUIT] = 0;    /* Ctrl- \ */
    newTermiosIO.c_cc [VERASE] = 0;   /* Del */
    newTermiosIO.c_cc [VKILL] = 0;    /* @ */
    newTermiosIO.c_cc [VEOF] = 4;     /* Ctrl-d */
    newTermiosIO.c_cc [VTIME] = 0;    /* Temporizador entre caracteres no utilizado */
    newTermiosIO.c_cc [VMIN] = 1;     /* El bloqueo de lectura hasta que llegue el 1 carácter */
    newTermiosIO.c_cc [VSTART] = 0;   /* Ctrl-q */
    newTermiosIO.c_cc [VSTOP] = 0;    /* Ctrl-s */
    newTermiosIO.c_cc [VSUSP] = 0;    /* Ctrl-z */
    newTermiosIO.c_cc [VEOL] = 0;     /* '\ 0' */
    newTermiosIO.c_cc [VREPRINT] = 0; /* Ctrl-r */
    newTermiosIO.c_cc [VDISCARD] = 0; /* Ctrl-u */
    newTermiosIO.c_cc [VWERASE] = 0;  /* Ctrl-w */
    newTermiosIO.c_cc [VLNEXT] = 0;   /* Ctrl-v */
    newTermiosIO.c_cc [VEOL2] = 0;    /* '\ 0' */
    
    //now clean the modem line and activate the settings for the port
    tcflush(fd, TCIFLUSH);
    tcsetattr(fd,TCSANOW,&newTermiosIO);
    return(fd);
}
