#include <stdio.h>

#define max 20

void CrearArreglo (int arreglo[max], int n);
void VerificarNum (int count, int n);

int main(void)
{
    int arreglo[max], n, count=0;

    printf ("Escriba el numeri");
    scanf ("%d", n)
    CrearArreglo (int arreglo[max],int i);
    VerificarNum (int arreglo[max], int n);

    return 0;
}

void CrearArreglo (int arreglo[max], int n)
{
    arreglo[0]=1;
    arredlo[-1]=0;
    for (int j=0, j<n-1, j++)
    {
        cont=arreglo[j]+arreglo[j-1];
        arreglo[j]=cont;
    }

}

void VerificarNum (int count, int n)
{
    printf ("n = %d", n);
    printf ("%d", count)
}
