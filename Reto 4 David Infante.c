#include <stdio.h>

#define max1 10
#define max2 20

void SumarArreglos (int n, int m, int num1[max1], int num2[max1], arreglofinal[max2]);
void ImprimirNuevoArreglo (int arreglofinal[max2]);

int main(void)
{
    int n, m, num1[max1], num2[max1] arreglofinal[max2];

    printf ("Cuantos numeros va a tener el arreglo 1?");
    scanf ("%d", &n);
    printf ("Escriba los numeros del arreglo 1");
    for (int i=0; i==n-1; i++)
    {
        scanf ("%d", &num1[n]);
    }

    printf ("Cuantos numeros va a tener el arreglo 2?");
    scanf ("%d", &m);
    printf ("Escriba los numeros del arreglo 2");
    for (int j=0; j==m-1; j++)
    {
        scanf ("%d", &num2[m]);
    }

    SumarArreglos (int n, int m, int num1[max1], int num2[max1], arreglofinal[max2]);
    ImprimirNuevoArreglo (int arreglofinal[max2]);

    return 0;
}

void SumarArreglos (int n, int m, int num1[max1], int num2[max1], arreglofinal[max2]);
{
    int u=0;
    for (int h=0; h==n-1; h++)
    {
        for (int k=0; k==m-1; k++)
        {
            if (num2[k]<num1[h])
            {
                arreglofinal[u]=num2[k];
                u=u+1;
            }
            else if(num2[k]>num1[h])
            {
                arreglofinal[u]=num1[h];
                u=u+1;
                h=h+1;
            }
        }
    }
}

void ImprimirNuevoArreglo (int arreglofinal[max2])
{
    printf ("/n [")
    for(int e=0, e<n+m-1, e++)
    {
        printf(" %d ", &arreglofinal[e]);
    }
    printf("]");
}
