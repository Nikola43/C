#include <stdio.h>

main()
{
    float num1 = 2;
    float num2 = 5;
    float total = 0;

    /**Si la condicion es verdadera------------>Se ejecuta esto------------>Si la condicion es falsa se ejucuta esto*/
    total =(num1 == 3)?                         num2 + 5                   : num1 + 5;

    printf("\nTotal: %0.2f\n",total);
}///Fin main.
