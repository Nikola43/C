/* -----------------| Incluimos Librerias |------------------ */
#include <stdio.h>    //Libreria I/O                      //
#include <string.h>   //Libreria para el uso de cadenas   //
#include <unistd.h>   //Liberia estandar unix             //
#include <stdlib.h>   //libreria estandar                 //
#include <fcntl.h>    //Libreria para control de archivo  //
#include <errno.h>    //Libreria de definicion de errores //
#include <termios.h>  //POSIX  Terminal                   //
/* ---------------------------------------------------------- */


/* -------------------------|  OpenPort MSGS |------------------------------- */
#define PORT_ARG           "-p"
#define BAUD_ARG           "-b"
#define WRITE_ARG          "-w"
/* -------------------------------------------------------------------------- */
/* -------------------------| OpenPort ERRORS |------------------------------ */
#define NO_PORT            "OpenPort: Puerto no especificado:"
#define NO_BAUD            "OpenPort: BaudRate no especificado:"
#define NO_WRITE_DATA      "OpenPort: No se han especificado datos para mandar:"
#define TOO_ARGC           "OpenPort: Demasiados argumentos:"
/* -------------------------------------------------------------------------- */
/* -------------------------|  OpenPort MSGS |------------------------------- */
#define NO_PORT_MSG        "./SerialPort -p \"Puerto serie\""
#define NO_BAUD_MSG        "./SerialPort -b \"BaudRate\""
#define NO_WRITE_DATA_MSG  "./SerialPort -w \"DATOS\""
#define NO_ARGS            "./SerialPort -p \"Puerto serie\" -b \"Baudrate\" -w \"const char *__format...\""
/* -------------------------------------------------------------------------- */


int openPort(char *port, char *baud);

int argvControl(int argc, char *argv[], char *port, char *baud, char *writeData);

/*----| Funcion Principal | ----*/
int main(int argc, char *argv[])
{
    int fd;
    char port[] = "";
    char baud[] = "";
    char writeData[] = "";
    if ( argvControl(argc, argv, port, baud, writeData) == 0 )
    {
        printf("%s, %s, %s, %i\n", port, baud, writeData, fd);
        /*
        fd = openPort(port, baud);


        if ( fd == -1 )
            printf("Error al abrir el puerto %s\n", port);
        else
            printf("Puerto %s abierto correctamente\n", port);

        if ( close(fd) == 0 )
            printf("Puerto %s cerrado correctamente\n", port);
        */
    }
    return(0);
}
/*----| ****************** |----*/

/*----| Funcion que abre el puerto serie | ----*/
int openPort(char *port, char *baud)
{
    struct termios newTermiosIO, oldTermiosIO;

    char *device =   port; //Variable para almacenar la ruta del puerto serie
    int BAUD = atoi(baud);
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

int argvControl(int argc, char *argv[], char *port, char *baud, char *writeData)
{

    int status;
    int argcCounter;
    if (argc > 7)
    {
       printf("Demasiados argumentos\n");
       status = -1;
    }
    else if (argc > 1)
             for (argcCounter = 1; argcCounter < argc; argcCounter++)
             {
                 if ( 0 == strcmp(PORT_ARG, argv[argcCounter]))
                 {
                     port = argv[argcCounter + 1];
                     status = 0;
                 }
                 if ( 0 == strcmp(BAUD_ARG, argv[argcCounter]))
                 {
                     baud = argv[argcCounter + 1];
                     status = 0;
                 }
                 if ( 0 == strcmp(WRITE_ARG, argv[argcCounter]))
                 {
                     writeData = argv[argcCounter + 1];
                     status = 0;
                 }
                 printf("PORT: '%s'   BAUD: '%s'    DATA: '%s'\n", port, baud, writeData);
             }
    else
    {
        printf( "%s\n", NO_ARGS );
        status = -1;
    }
    //printf("PORT: '%s'   BAUD: '%s'    DATA: '%s'\n", port, baud, writeData);
    return(status);
}
