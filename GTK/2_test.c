#include <gtk/gtk.h>
#include <stdio.h>    //Definiciones I/O                      //
#include <string.h>   //Definiciones para el uso de cadenas   //
#include <unistd.h>   //Definiciones estandar unix            //
#include <fcntl.h>    //Control de archivo                    //
#include <errno.h>    //Definiciones de errores               //
#include <termios.h>  //  POSIX  Terminal                     //


static void value_changed(GtkWidget* scale, gpointer data)
{
    g_print("%f\n", gtk_range_get_value(GTK_RANGE(scale)));
}

int main(int argc, char *argv[])
{
    open_port();
    gtk_init(&argc, &argv);
    GtkWidget *window, *scale;
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(windows, "delete_event", G_CALLBACK(gtk_main_quit), NULL);
    
    
    GtkObject* adjustment=gtk_adjustment_new(0,0,10,1,1,NULL);
    scale=gtk_hscale_new(GTK_ADJUSTMENT(adjustment));
    gtk_scale_set_value_pos(GTK_SCALE(scale), GTK_POS_BOTTOM);
    g_signal_connect(scale, "value-changed", G_CALLBACK(value_changed), NULL);
    gtk_container_add(GTK_CONTAINER(window), scale);
    gtk_widget_show_all(window);	    
    gtk_main();
    return 0;
}

int open_port(void)
{
      //Variable con la ruta del puerto serie
      const char *device = "/dev/ttyACM0";
        int fd; //Variable para el puerto

	  //Abrimos el puerto en lectura y escritura
	  fd = open(device, O_RDWR | O_NOCTTY | O_NDELAY);
	    if(fd == -1)
		  {
		          //No se encuentra el puerto
		          perror("open_port: No se puede abrir el puerto serie");
			    }
	      else
		    {
			    printf("Puerto '/dev/ttyACM0' abierto\n");
			        fcntl(fd, F_SETFL, 0);

				    return (fd);
				      }
}
