#include <stdio.h>

#define MAX_NUM 9

void invertir(int v[]);
int minimo(int v[]);

void main()
{
    int nums[MAX_NUM];
    int i;
    int menor;

    printf("Introduce nueve numeros, devolveremos la inversa por pantalla y el menor\n\n");
    for(i = 0; i < MAX_NUM; i++)
    {
        printf("Numero[%d] = ", i);
        scanf("%d", &nums[i]);
    }
    printf("\n");

    invertir(nums);
    menor = minimo(nums);

    printf("\nEl numero minimo es %d", menor);
}

void invertir(int v[])
{
    int i;
    for(i = MAX_NUM - 1; i >= 0; i--)
        printf("Numero[%d] = %d\n", i, v[i]);
}

int minimo(int v[])
{
    register int i;
    int menor;
    menor = v[0];
    for(i = 0; i < MAX_NUM; i++)
        if(v[i] < menor)
            menor = v[i];

    return(menor);
}
