#include <stdio.h>

#define max 10

void ImprimeArreglo (int nums[max], int respuesta[max]);
void CalcularArreglo (int nums[max], int respuesta[max]);

int main(void)
{
    int nums[max], i, respuesta[max];

    printf ("Cuantos numeros va a haber en el arreglo?");
    scanf("%d", &i);
    printf ("Escriba los numeros del arreglo:");
    for (int h=0; h<i-1; h++)
    {
        scanf ("%d", &nums[h]);
        if (nums[h]<-30 && nums[h]>30)
        {
            h=h-1;
            printf("Numero no valido, vuelva a escribir uno");
        }
        else
        {
            nums[h]=nums[h]+0;
        }
    }

    CalcularArreglo (int nums[max], int respuesta[max]);
    ImprimeArreglo (int nums[max], int respuesta[max]);

    return 0;
}

void CalcularArreglo (int nums[max], int respuesta[max])
{
    int aux
    for (int j=0, j<i-1, j++)
    {
        for (int l=0, l<i-1, l++)
        {
            if (l==j)
                {
                    respuesta[j]=respuesta[j]+0;
                }
            else
                {
                    aux=respuesta[j];
                    respuesta[j]=nums[j]*aux;
                }
        }

    }

}

void ImprimeArreglo (int respuesta[max])
{
    printf ("/n Entrada: [")
    for(int f=0, f<i-1, f++)
    {
        printf(" %d ", nums[f]);
    }
    printf("]");

    printf ("/n Salida: [")
    for(int k=0, k<i-1, k++)
    {
        printf(" %d ", respuesta[k]);
    }
    printf("]");
}
