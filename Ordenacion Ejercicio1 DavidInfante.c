#include <stdio.h>

#define max 10

void ImprimeArreglo (int arreglo[max]);
void VerificarRepetido (int arreglo[max]);

int main(void)
{
    int arreglo[max], i, rep;

    VerificarRepetido (int arreglo[max]);
    ImprimeArreglo (int arreglo[max]);

    printf ("Cuantos numeros va a haber en el arreglo?");
    scanf("%d", &i);
    printf ("Escriba los numeros del arreglo:");
    for (int h=0; h<i; h++)
    {
        scanf ("%d", &arreglo[h]);
    }
    printf ("Cual es el numero que quiere verificar?");
    scanf("%d", &rep);

    VerificarRepetido (int arreglo[max]);
    ImprimeArreglo (int arreglo[max]);

    return 0;
}

void VerificarRepetido (int arreglo[max])
{
    int count=0;

    for (int j=0, j<i, j++)
    {
        if (rep==arreglo[j])
        {
            count=count+1;
        }
        else
        {
            count=count+0;
        }
    }

}

void ImprimeArreglo (int arreglo[max])
{
    printf ("/n[")
    for(int k=0, k<i, k++)
    {
        printf(" %d ", arreglo[k]);
    }
    printf("]");

    printf("%d", rep);
    printf("El numero %d aparece %d veces en el arreglo", rep, count);
}
