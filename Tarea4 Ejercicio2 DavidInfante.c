 #include <stdio.h>

 int main()
 {
     float Dias, Horas, Minutos, segundos;

     printf("Cuantos dias son?");
     scanf("%f", &Dias);
     printf("Cuantas horas son?");
     scanf("%f", &Horas);
     printf("Cuantas minutos son?");
     scanf("%f", &Minutos);

     Segundos=(Minutos*60)+(Horas*3600)+(Dias*86400);

     printf("%d dias, %d horas y %d minutos son: %d segundos",Dias,Horas,Minutos,segundos);

     return 0;
 }
