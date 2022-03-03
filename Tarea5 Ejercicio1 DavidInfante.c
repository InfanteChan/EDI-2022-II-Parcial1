#include <stdio.h>

 int main()
 {
     float Hora, Minutos;

     printf("Cual es la hora?");
     scanf("%f",&Hora);
     printf("Cuales son los minutos?");
     scanf("%f",&Minutos);

     if (Hora<25&&Hora>0)
     {
         if (Hora>0&&Hora<12)
         {
             printf("Buenos dias :D";
         }
         if (Hora<18&&Hora>11)
         {
             if (Minutos<51&&Minutos>0)
             {
                 printf("Buenas tardes :D");
             }
         }
         if (Hora<25&&Hora>17)
         {
             printf("Buenas noches :D")
         }
     }
     else
     {
         printf("La hora no es valida")
     }
     return 0;
 }
