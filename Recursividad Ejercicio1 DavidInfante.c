#include <stdio.h>

#define max 10

void VerificarSimetria (int arreglo[max], int i, int count);
void ImprimeResultado (int count);

int main(void)
{
    int arreglo[max], i, count=0;

    printf ("Cuantos numeros va a haber en el arreglo?");
    scanf("%d", &i);
    printf ("Escriba los numeros del arreglo:");
    for (int h=0; h<i-1; h++)
    {
        scanf ("%d", &arreglo[h]);
    }

    VerificarSimetria (int arreglo[max],int i);
    ImprimeResultado (int arreglo[max]);

    return 0;
}

void VerificarSimetria (int arreglo[max], int i, int count)
{
    for (int j=0, j<i, j++)
    {
        for (int l=i-1, l>-1, l--)
        {
            if (arreglo[l]==arreglo[j])
                {
                    count=count+0;
                }
            else
                {
                    count=count+1;
                }
        }

    }

}

void ImprimeResultado (count)
{
    int aux;
    if (count>0)
    {
        printf ("0");
    }
    else{
        if (count<1)
        {
            printf ("1");
        }
    }
}
