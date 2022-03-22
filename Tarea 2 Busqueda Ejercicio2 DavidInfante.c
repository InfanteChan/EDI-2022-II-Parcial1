#include <stdio.h>

main()
{
    int numero, objetivo, lista[3];
    int i=0;
    printf ("Cuales son los numeros de la lista?");
    for (int i=0; i<4; i++)
    {
        scanf ("%d", &lista[i]);
        printf (" ");
    }

    printf ("Cual es el numero que quieres buscar?");
    scanf ("%d", &objetivo);

    void busqueda (lista[i]));
    int aux;
    for(aux=0; aux<4; aux++)
    {
        for(int pos=3; pos<4; pos--)
        {
            if(objetivo==lista[aux])
            {
                printf("%d", &aux);
            }
            else
            {
                printf("%d", &pos);
            }
        }
    }
    return 0;
}
