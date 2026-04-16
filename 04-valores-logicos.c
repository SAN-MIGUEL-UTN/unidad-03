#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("El mayor es %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("El mayor es %d\n", b);
    }
    else
    {
        printf("El mayor es %d\n", c);
    }
    return 0;
}