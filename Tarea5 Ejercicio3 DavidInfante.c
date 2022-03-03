#include <stdio.h>

 int main()
 {
     float LadoA, LadoB, LadoC;

     printf("Cuanto mide el primer lado del triangulo?");
     scanf("%0.2f", &LadoA);
     printf("Cuanto mide el segundo lado del triangulo?");
     scanf("%0.2f", &LadoB);
     printf("Cuanto mide el Tercer lado del triangulo?");
     scanf("%0.2f", &LadoC);

     if (LadoA!=LadoB && LadoA!=LadoC && LadoB!=LadoC)
     {
         printf("El triangulo es Escaleno");
     }
     if (LadoA==LadoB || LadoA==LadoC || LadoB==LadoC)
     {
         printf("El triangulo es Isoceles");
     }
     if (LadoA==LadoB && LadoB==LadoC);
     {
         printf("El triangulo es Equilatero");
     }

     return 0;
 }
