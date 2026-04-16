#include <stdio.h>

#define EDAD_LEGAL 18

int main(int argc, char const *argv[])
{
    int edad;
    int anios;

    printf("Hola\n");
    printf("Edad: ");
    scanf("%d", &edad);

    anios = EDAD_LEGAL - edad;

    if (edad >= EDAD_LEGAL)
    {
        printf("Pase\n");
    }
    else
    {
        printf("NO PASA. Volve en %d anios\n", anios);
    }

    printf("Chau\n");

    return 0;
}
