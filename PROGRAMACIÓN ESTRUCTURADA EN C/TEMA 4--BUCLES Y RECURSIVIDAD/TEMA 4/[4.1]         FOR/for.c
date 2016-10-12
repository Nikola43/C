#include <stdio.h>

main()
{
    int a;
    printf("1 o 2 o 3: ");
    scanf("%d",&a);

    if(a == 1)
    {


    int tiempo;
    int num = 2;              ///tiempo++ / tiempo = tiempo + VARIABLE
    for(tiempo = 0; tiempo < 10; tiempo = tiempo++)
    {
        printf("%d\n",tiempo); ///Ejecutado mientras el bucle se cumple.
    }
    }
    else if(a == 2)
    {
        int tiempo;
    int num = 2;              ///tiempo++ / tiempo = tiempo + VARIABLE
    for(tiempo = 0; tiempo < 10; tiempo++)
    {
        printf("%d  ",num++); ///Ejecutado mientras el bucle se cumple.
        printf("%d\n",++num); ///Ejecutado mientras el bucle se cumple.
    }
    }
    else
    {

    int tiempo;
    int num = 2;              ///tiempo++ / tiempo = tiempo + VARIABLE
    for(tiempo = 0; tiempo < 10; tiempo = tiempo++ )
    {
        printf("%d\n",++num + num--); ///Ejecutado mientras el bucle se cumple.
    }
    }

}
