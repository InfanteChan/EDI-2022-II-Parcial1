#include <stdio.h>

 int main()
 {
     float Kilos, Descuento, PrecioPorKilo;

     printf("Cuanto cuesta el kilo de manzana?");
     scanf("%0.2f", &PrecioPorKilo);
     printf("Cuantos kilos son?");
     scanf("%0.2f", &Kilos);

     if (Kilos>0)
     {
         if (Kilos>0&&Kilos<2.01)
         {
             Descuento=Kilos*PrecioPorKilo;
             prinf("El precio del producto es %0.2f", &Descuento);
         }
         if (Kilos>2&&Kilos<5.01)
         {
             Descuento=(Kilos*PrecioPorKilo)-(Kilos*PrecioPorKilo)*0.1;
             prinf("El precio del producto es %0.2f", &Descuento);
         }
         if (Kilos>5&&Kilos<10.01)
         {
             Descuento=(Kilos*PrecioPorKilo)-(Kilos*PrecioPorKilo)*0.15;
             prinf("El precio del producto es %0.2f", &Descuento);
         }
         if (Kilos>10)
         {
             Descuento=(Kilos*PrecioPorKilo)-(Kilos*PrecioPorKilo)*0.2;
             prinf("El precio del producto es %0.2f", &Descuento);
         }
     }
     else
     {
         prinf("Numero invalido :b")
     }

     return 0;
 }
