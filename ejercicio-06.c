#include <stdio.h>

int main(int argc, char const *argv[])
{
    int edad;
    float sueldo, aporte, aporteF;

    printf("ingrese su edad: ");
    scanf("%d", &edad);
    printf("ingrese su sueldo: ");
    scanf("%f", &sueldo);

    
    if (sueldo < 20000 && edad > 30)
    {
    aporte = 0.7;
    aporteF = (sueldo * aporte) /100;
    printf("Debes %.0f de aporte al sindicato.", aporteF);
    } else if (sueldo >= 20000 && sueldo <= 29999 && edad > 30)
    {
        aporte = 1.4;
        aporteF = (sueldo * aporte) /100;
        printf("Debes %.0f de aporte al sindicato.", aporteF);
    } else if (sueldo >= 30000 && sueldo <= 39999 && edad > 30)
    {
        aporte = 2.1;
        aporteF = (sueldo * aporte) /100;
        printf("Debes %.0f de aporte al sindicato.", aporteF);
    } else
    (sueldo >= 40000 && edad > 30);
        aporte = 2.8;
        aporteF = (sueldo * aporte) /100;


    if (edad <= 30)
    {
         aporteF = aporteF * 1.30;
        printf("Debes %.0f de aporte al sindicato.", aporteF);
    }
    
       
    
    return 0;
}
