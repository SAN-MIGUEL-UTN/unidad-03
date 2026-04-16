#include <stdio.h>

int main(int argc, char const *argv[])
{
    int inscriptos;
    int asientos;
    int faltan;

    printf("Ingresa la cantidad de asientos disponibles ");
    scanf("%d", &asientos);
    printf("Ingresa la cantidad de inscriptos ");
    scanf("%d", &inscriptos);

    faltan = inscriptos - asientos;

    if (inscriptos <= asientos)
    {
        printf("Alcanzan los asientos.");
    }
    
    else {
        printf("Faltan %d asientos", faltan);
    }

    return 0;
}
