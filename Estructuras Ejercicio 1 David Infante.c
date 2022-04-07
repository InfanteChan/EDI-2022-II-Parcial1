#include <stdio.h>

#define max 12

void CrearFecha (int mes[max], int m, int cont);
void ImprimirFecha (int count, int m, int año);

int main(void)
{
    int mes[max], dia, año;
    char m;

    printf ("Escriba el dia");
    scanf ("%d", &dia);
    printf ("Escriba el mes");
    scanf ("%s", &m);
    printf ("Escriba el año");
    scanf ("%d", &año);

    CrearFecha (int mes[max], int m, int cont);
    ImprimirFecha (int count, int dia, int año);

    return 0;
}

void CrearFecha (int mes[max], int m)
{
    if (m=="Enero")
        {
            mes[0]=01;
        }
        else if (m=="Febrero")
        {
            mes[1]=02;
        }
        else if (m=="Marzo")
        {
            mes[2]=03;
        }
        else if (m=="Abril")
        {
            mes[3]=04;
        }
        else if (m=="Mayo")
        {
            mes[4]=05;
        }
        else if (m=="Junio")
        {
            mes[5]=06;
        }
        else if (m=="Julio")
        {
            mes[6]=07;
        }
        else if (m=="Agosto")
        {
            mes[7]=08;
        }
        else if (m=="Septiembre")
        {
            mes[8]=09;
        }
        else if (m=="Octubre")
        {
            mes[9]=10;
        }
        else if (m=="Noviembre")
        {
            mes[10]=11;
        }
        else if (m=="Diciembre")
        {
            mes[11]=12;
        }
        else
        {
            printf ("fecha invalida");
        }
}

void ImprimirFecha (int dia, char m, int año)
{
    printf ("La fecha es:");
    printf ("%d/%s/%d", &dia, &m, &año);
}
