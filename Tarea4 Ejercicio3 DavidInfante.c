 #include <stdio.h>

 int main()
 {
     float Dias, Horas, Minutos, segundos;

     printf("Cuantos egundos son?");
     scanf("%f", &segundos);

     Dias=segundos/86400;
     Horas=(segundos%86400)/60;
     Minutos=((segundos%86400)%60)/60;
     segundos=((segundos%86400)%60)%60;

     printf("%u dias: ",Dias);
     printf("%u horas: ",Horas);
     printf("%u minutos: ",Minutos);
     printf("%u segundos: ",segundos);

     return 0;
 }
