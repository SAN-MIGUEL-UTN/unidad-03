#include <stdio.h>
int main(int argc, char const *argv[])
{
    char numR;

    printf("ingrese una letra (I-V-X-L-C-D-M): ");
    scanf("%c", &numR);

    switch (numR)
    {
    case 'I':
    
            printf("El valor es 1");
        
        break;
    case 'V':

            printf("El valor es 5");
        
        break;
    case 'X':

            printf("El valor es 10");
        
        break;
    case 'L':

            printf("El valor es 50");
        
        break;
    case 'C':

            printf("El valor es 100");
        
        break;
    case 'D':

            printf("El valor es 500");
        
        break;
    case 'M':

            printf("El valor es 1000");
        
        break;
    default: printf("El digito es invalido.");
        break;
    }
    return 0;
}
