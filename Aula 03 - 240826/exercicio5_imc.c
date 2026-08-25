#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    float peso, altura, imc;
    printf("Qual o peso da pessoa em Kg? ");
    scanf("%f", &peso);
    printf("qual é a altura da pessoa em metros? ");
    scanf("%f", &altura);
    imc = (float) peso/pow(altura, 2);
    printf("O Índice de Massa Corporal é %.2f kg/m²", imc);

    return 0;
}
