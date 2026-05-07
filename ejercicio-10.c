#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("ingrese un numero (1-12): ");
    scanf("%d", &num);
    if (num < 1 || num > 12)
    {
        printf("el numero no es valido");
    }
    
    switch (num)
    {
    case 1:
        if (num = 1)
        {
            printf("tu mes es enero");
        }
        break;
    case 2:
    if (num = 2)
        {
            printf("tu mes es febrero");
        }
        break;
    case 3:
    if (num = 3)
        {
            printf("tu mes es marzo");
        }
        break;
    case 4:
    if (num = 4)
        {
            printf("tu mes es abril");
        }
        break;
    case 5:
    if (num = 5)
        {
            printf("tu mes es mayo");
        }
        break;
    case 6:
    if (num = 6)
        {
            printf("tu mes es junio");
        }
        break;
    case 7:
    if (num = 7)
        {
            printf("tu mes es julio");
        }
        break;
    case 8:
    if (num = 8)
        {
            printf("tu mes es agosto");
        }
        break;
    case 9:
    if (num = 9)
        {
            printf("tu mes es septiembre");
        }
        break;
    case 10:
    if (num = 10)
        {
            printf("tu mes es octubre");
        }
        break;
    case 11:
    if (num = 11)
        {
            printf("tu mes es noviembre");
        }
        break;
    case 12:
    if (num = 12)
        {
            printf("tu mes es diciembre");
        }
        break;
    default:
        break;
    }
    return 0;
}
