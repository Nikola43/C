#include <gtk/gtk.h>

#include <stdio.h>    //Definiciones I/O                      //
#include <string.h>   //Definiciones para el uso de cadenas   //
#include <unistd.h>   //Definiciones estandar unix            //
#include <fcntl.h>    //Control de archivo                    //
#include <errno.h>    //Definiciones de errores               //
#include <termios.h>  //  POSIX  Terminal                     //

int openSerialPort();

int main (int argc, char * argv[])
{

    GtkWidget * ventana;
    gtk_init (&argc, &argv);
    ventana = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  
    if(openSerialPort() == 0)
        gtk_window_set_title((GtkWindow *) ventana, "Puerto serie no conectado");
    else
        gtk_window_set_title((GtkWindow *) ventana, "Puerto serie conectado");
  
    gtk_widget_show(ventana);
    gtk_main();
    return 0;
}


int openSerialPort()
{
    //Variable con la ruta del puerto serie
    const char *device = "/dev/ttyACM0";
    int fd; //Variable para el puerto
 
    //Abrimos el puerto en lectura y escritura
    fd = open(device, O_RDWR | O_NOCTTY | O_NDELAY);
    if(fd == -1)
    {
        //No se encuentra el puerto
        printf("open_port: No se puede abrir el puerto '%s'\n", device);
        return(0);
    }
    else
    {
        printf("open_port: Puerto '%s' abierto\n", device);
        fcntl(fd, F_SETFL, 0);
        return(1);				     
    }
}
