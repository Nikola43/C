#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Arduino
{
    char  port_name[30];
    char  write_data[30];
    int   speed;
};

void refe(struct Arduino *SerialPort);

int main()
{

    struct Arduino currentArduino;

    strcpy(currentArduino.port_name, "a");
    strcpy(currentArduino.write_data, "b");
    currentArduino.speed = 244;

    //Print values
    printf("port_name: %s\n", currentArduino.port_name);
    printf("write_data: %s\n", currentArduino.write_data);
    printf("speed: %i\n", currentArduino.speed);

    printf("dir currentArduino: %x\n\n", &currentArduino);



    refe(&currentArduino);

    //Print values
    printf("port_name: %s\n", currentArduino.port_name);
    printf("write_data: %s\n", currentArduino.write_data);
    printf("speed: %i\n", currentArduino.speed);
    return(0);

}


void refe(struct Arduino *SerialPort)
{

    strcpy( SerialPort->port_name, "/dev/tty/ACM0");
    strcpy( SerialPort->write_data, "hola");

    SerialPort->speed = 9600;

    //Print values
    printf("%s\n", SerialPort->port_name);
    printf("%s\n", SerialPort->write_data);
    printf("%i\n", SerialPort->speed);

    printf("dir SerialPort: %x\n\n", &SerialPort);
}

