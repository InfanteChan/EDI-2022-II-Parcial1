#include <stdio.h>

#define max 10

void DarValores (int n, char objetivo, char letras[max], int ContObj, int ContArr[max]);
void VerificarArreglo (int n, char objetivo, char letras[max], int ContObj, int ContArr[max]);
void ImprimirResultado (char letras[max], char mayor, char objetivo);

int main(void)
{
    int n, ContObj, ContArr[max];
    char objetivo, letras[max];

    printf ("Cuantas letras va a tener el arreglo?");
    scanf ("%d", &n);
    printf ("Escriba las letras del arreglo");
    for (int i=0; i==n-1; i++)
    {
        scanf ("%c", &letras[i]);
    }
    printf ("Cual es la letra que quiere comparar?");1
    scanf ("%c", &objetivo);

    DarValores (int n, char objetivo, char letras[max], int ContObj, int ContArr[max]);
    VerificarArreglo (int n, char objetivo, char letras[max], int ContObj, int ContArr[max]);
    ImprimirResultado (char letras[max], char mayor, char objetivo);

    return 0;
}

void DarValores (int n, char objetivo, char letras[max], int ContObj, int ContArr[max])
{
    for (int s=0; s==n-1; s++)
    {
        if (letras[s]=="a")
        {
            ContArr[s]=1;
        }
        else if (letras[s]=="b")
        {
            ContArr[s]=2;
        }
        else if (letras[s]=="c")
        {
            ContArr[s]=3;
        }
        else if (letras[s]=="d")
        {
            ContArr[s]=4;
        }
        else if (letras[s]=="e")
        {
            ContArr[s]=5;
        }
        else if (letras[s]=="f")
        {
            ContArr[s]=6;
        }
        else if (letras[s]=="g")
        {
            ContArr[s]=7;
        }
        else if (letras[s]=="h")
        {
            ContArr[s]=8;
        }
        else if (letras[s]=="i")
        {
            ContArr[s]=9;
        }
        else if (letras[s]=="j")
        {
            ContArr[s]=10;
        }
        else if (letras[s]=="k")
        {
            ContArr[s]=11;
        }
        else if (letras[s]=="l")
        {
            ContArr[s]=12;
        }
        else if (letras[s]=="m")
        {
            ContArr[s]=13;
        }
        else if (letras[s]=="n")
        {
            ContArr[s]=14;
        }
        else if (letras[s]=="o")
        {
            ContArr[s]=15;
        }
        else if (letras[s]=="p")
        {
            ContArr[s]=16;
        }
        else if (letras[s]=="q")
        {
            ContArr[s]=17;
        }
        else if (letras[s]=="r")
        {
            ContArr[s]=18;
        }
        else if (letras[s]=="s")
        {
            ContArr[s]=19;
        }
        else if (letras[s]=="t")
        {
            ContArr[s]=20;
        }
        else if (letras[s]=="v")
        {
            ContArr[s]=21;
        }
        else if (letras[s]=="w")
        {
            ContArr[s]=22;
        }
        else if (letras[s]=="x")
        {
            ContArr[s]=23;
        }
        else if (letras[s]=="y")
        {
            ContArr[s]=24;
        }
        else if (letras[s]=="z")
        {
            ContArr[s]=25;
        }
    }
    if (objetivo=="a")
        {
            ContObj=1;
        }
        else if (objetivo=="b")
        {
            ContObj=2;
        }
        else if (objetivo=="c")
        {
            ContObj=3;
        }
        else if (objetivo=="d")
        {
            ContObj=4;
        }
        else if (objetivo=="e")
        {
            ContObj=5;
        }
        else if (objetivo=="f")
        {
            ContObj=6;
        }
        else if (objetivo=="g")
        {
            ContObj=7;
        }
        else if (objetivo=="h")
        {
            ContObj=8;
        }
        else if (objetivo=="i")
        {
            ContObj=9;
        }
        else if (objetivo=="j")
        {
            ContObj=10;
        }
        else if (objetivo=="k")
        {
            ContObj=11;
        }
        else if (objetivo=="l")
        {
            ContObj=12;
        }
        else if (objetivo=="m")
        {
            ContObj=13;
        }
        else if (objetivo=="n")
        {
            ContObj=14;
        }
        else if (objetivo=="o")
        {
            ContObj=15;
        }
        else if (objetivo=="p")
        {
            ContObj=16;
        }
        else if (objetivo=="q")
        {
            ContObj=17;
        }
        else if (objetivo=="r")
        {
            ContObj=18;
        }
        else if (objetivo=="s")
        {
            ContObj=19;
        }
        else if (objetivo=="t")
        {
            ContObj=20;
        }
        else if (objetivo=="v")
        {
            ContObj=21;
        }
        else if (objetivo=="w")
        {
            ContObj=22;
        }
        else if (objetivo=="x")
        {
            ContObj=23;
        }
        else if (objetivo=="y")
        {
            ContObj=24;
        }
        else if (objetivo=="z")
        {
            ContObj=25;
        }
}

void VerificarArreglo (int n, char objetivo, char letras[max], int ContObj, int ContArr[max]);
{
    char mayor;
    for (int p=0; p==n-1; p++)
    {
        n=0;
        if (ContObj>ContArr[p])
        {
            mayor=letras[p];
        }
        else
        {
            mayor=mayor;
        }
        n=n+1;
    }
}

void ImprimirResultado (char letras[max], char mayor, char objetivo)
{
    printf ("/n Letras:[")
    for(int k=0, k<i, k++)
    {
        printf(" %c ", &letras[max]);
    }
    printf("]");

    printf("Objetivo: %c", &objetivo);
    printf("f", &mayor);
}

