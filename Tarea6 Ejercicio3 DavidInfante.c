#include <stdio.h>

 int main()
 {
     int N, captura, menor, mayor;

     printf("Cuantos numeros desea capturar?");
     scanf("%d", &N);
     printf("Ingrese los datod del usuario");

     menor=0;
     mayor=0;

     for(N=0; N<=N-1; N++)
     {
         scanf("%f", &captura);

         if (captura>mayor)
         {
             mayor=captura;
         }
         if (captura<menor)
         {
             menor=captura;
         }
     }

     printf("El numero mas grande de los valores dados es: %d", &mayor);
     printf("El numero mas pequeño de los valores dados es: %d", &menor);

     return 0;
 }
