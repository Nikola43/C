#include <stdio.h>
/* recogemos la etrada del usuario*/
main()
{
      float cigarros_pako; /*Un numero introducido por el usuario*/
      float cigarros_lopez;
      float cigarros_frt;
      float cigarros_total;

      float media;

      printf("Pako introduce cuantos cigarros fumas al dia: ");
      scanf("%f", &cigarros_pako);
      printf("\n");
      printf("lopez introduce cuantos cigarros fumas al dia: ");
      scanf("%f", &cigarros_lopez);
      printf("\n");
      printf("frt introduce cuantos cigarros fuma al dia: ");
      scanf("%f", &cigarros_frt);
      printf("\n");



      printf("Pako fuma %0.0f cigarros al dia\n",cigarros_pako);
      printf("lopez fuma %0.0f cigarros al dia\n",cigarros_lopez);
      printf("frt fuma %0.0f cigarros al dia\n",cigarros_frt);
      cigarros_total = cigarros_pako + cigarros_lopez + cigarros_frt;
      printf("\n");
      printf("entre todos fumais %0.0f cigarros en total\n",cigarros_total);

            media = cigarros_total / 3;

            printf("Fumais una media de %f cigarros\n", media);

      if (cigarros_total <= 10)
      {
       printf("Fumais poco\n");
      }
      else
      if(cigarros_total >= 20)
      {
            printf("Fumais mucho\n");
      }



      system("pause>nul");
      }
