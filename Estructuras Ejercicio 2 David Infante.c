#include <stdio.h>
#include <math.h>

void CalcularDistancia (int distancia, int x1, int y1, int x2, int y2);
void ImprimirDistancia (int distancia, int x1, int y1, int x2, int y2);

int main(void)
{
    int x1, x2, y1, y2;
    int distancia

    printf ("Escriba las coordenadas en X del primer punto:");
    scanf ("%d", &x1);
    printf ("Escriba las coordenadas en y del primer punto:");
    scanf ("%d", &y1);
    printf ("Escriba las coordenadas en X del segundo punto:");
    scanf ("%d", &x2);
    printf ("Escriba las coordenadas en y del segundo punto:");
    scanf ("%d", &y2);

    CalcularDistancia (int distancia, int x1, int y1, int x2, int y2);
    ImprimirDistancia (int distancia, int x1, int y1, int x2, int y2);

    return 0;
}

void CalcularDistancia (int distancia, int x1, int y1, int x2, int y2)
{
    int i=0;
    int L1;
    int L2;

    L1=x2-x1;
    L2=y2-y1;
    distancia=sqrt((L1*L1)+(L2*L2));
}

void ImprimirDistancia (int distancia, int x1, int y1, int x2, int y2)
{
    printf ("La distancia entre el punto (%d,%d) y el punto (%d,%d) es de:", &x1, &y1, &x2, &y2);
    printf ("%d", &distancia);
}
