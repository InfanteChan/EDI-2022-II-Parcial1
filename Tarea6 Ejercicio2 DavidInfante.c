#include <stdio.h>

 int main()
 {
     int numero, divisor, resultado, suma, tipo;

     numero=1;

     do
     {
         printf("Cual es el numero a evaluar?");
         scanf("%d", &numero);

         suma=0;

     for(divisor=1; divisor<=numero-1; divisor++)
     {
         resultado=0;
         resultado=numero%divisor;

         if (resultado==0)
         {
             suma=suma+divisor;
         }
     }
     if (suma==numero)
     {
         tipo=1;
     }
     else
     {
         tipo=0;
     }

     if (tipo==1)
     {
         printf("El numero %d SI es perfecto", &numero);
     }
     else
     {
         printf(" el numero %d No es perfecto",&numero)
     }
     }
     while (numero>0);

     return 0;
 }
