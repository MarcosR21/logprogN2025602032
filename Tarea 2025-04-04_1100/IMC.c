#include <stdio.h>

int main()
{
    float peso, altura, IMC;
    printf("Ingrese su pesos en kg: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en m: ");
    scanf("%f", &altura);

    IMC = peso/(altura * altura);
    printf("Su IMC es: %.2f\n", IMC);

    if(IMC <= 18.4)
    {
        printf("Situacion: Bajo de Peso\n");
    }
    else if(IMC <= 24.9)
    {
        printf("Situacion: Normal\n");
    }
    else if(IMC <= 29.9)
    {
        printf("Situacion: Sobrepeso\n");
    }
    else if(IMC <= 34.9)
    {
        printf("Situacion: Obesidad clase 1\n");
    }
    else if(IMC <= 39.9)
    {
        printf("Situacion: Obesidad clase 2\n");
    }
    else if(IMC >= 40.0)
    {
        printf("Situacion: Obesidad clase 3\n");
    }

    return 0;
}
