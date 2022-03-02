 #include <stdio.h>

 int main()
 {
     float Precio, Descuento, PrecioFinal;

     printf("Cual es el precio del producto?");
     scanf("%f", &Precio);
     printf("Cual es el descuento que tiene el producto?");
     scanf("%f", &Precio);

     PrecioFinal=Precio-(Precio*(Descuento/100));

     printf("%2.f", PrecioFinal);

     return 0;
 }
