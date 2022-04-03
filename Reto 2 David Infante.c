#include <stdio.h>

#define max 10

void hexadecimal (int hexa[max]);
void ImprimeArreglo (int hexa[max]);

int main(void)
{
    int hexa[max], num;

    printf ("Cual es el numero que quiere transformar a hexadecimal?");
    scanf("%d", &num);

    hexadecimal (int num, int hexa[max]);
    ImprimeArreglo (int hexa[max]);

    return 0;
}

void hexadecimal (int num, int hexa[max],)
{
    int aux=num;
    int k
    int j=0
    while (k>0)
    {
        k=aux/16;
        hexa[j]= aux%16;
        aux=hexa[j];
        j=j+1
    }

}

void ImprimeArreglo (int hexa[max])
{
    for(int f=j, f==0, f--)
    {
        if (hexa[f]==10)
        {
            prinf ("A");
        }
        else
            {
        if (hexa[f]==11)
        {
            prinf ("B");
        }
            }
        else
            {
        if (hexa[f]==12)
        {
            prinf ("C");
        }
            }
        else
            {
        if (hexa[f]==13)
        {
            prinf ("D");
        }
            }
        else
            {
        if (hexa[f]==14)
        {
            prinf ("E");
        }
            }
        else
            {
        if (hexa[f]==14)
        {
            prinf ("F");
        }
            }
        else
        {
            printf ("%d", hexa[f]);
        }
    }
}
