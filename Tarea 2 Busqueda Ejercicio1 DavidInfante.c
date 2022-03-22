#include <stdio.h>

main()
{
    int nombre, objetivo, lista[3];
    int i=0;
    printf ("Cuales son los nombres de la lista?");
    for (int i=0; i<4; i++)
    {
        scanf ("%s", &lista[i]);
        printf (" ");
    }

    printf ("Cual es el nombre que quieres buscar?");
    scanf ("%s", &objetivo);

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
