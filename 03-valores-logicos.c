#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    if (a >= b)
    {
        printf("El mayor es %d", a);
    }
    else
    {
        printf("El mayor es %d", b);
    }
    return 0;
}
