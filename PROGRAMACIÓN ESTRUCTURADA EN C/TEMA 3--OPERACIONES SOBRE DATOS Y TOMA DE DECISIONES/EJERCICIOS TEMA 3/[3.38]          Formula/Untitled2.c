/**
Este programa calcula la formula F = AB + AC + ABC
*/

main()
{
    float F;
    float A;
    float B;
    float C;

    printf("Introduce los siguientes valores: \n");

    printf("A: ");
    scanf("%f",&A);

    printf("B: ");
    scanf("%f",&B);

    printf("C: ");
    scanf("%f",&C);

    F = A*B + A*C + A*B*C;




    printf("El resultado de: %0.0f*%0.0f + %0.0f*%0.0f + %0.0f*%0.0f*%0.0f\n", A, B, A, C, A, B, C);
    printf("es igual a: %0.0f",F);


}///Fin main

