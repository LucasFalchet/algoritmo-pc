#include <stdio.h>
#include <locale.h>

void trocar_valor(float *valor1, float *valor2)
{
    float auxiliar;
    auxiliar = *valor1;
    *valor1 = *valor2;
    *valor2 = auxiliar;

    printf("Depois: 1º Valor = %.2f | 2º Valor = %.2f\n", *valor1, *valor2);
}

int main()

{
    setlocale(LC_CTYPE, "");

    float valor1, valor2;

    printf("Digite o 1º valor: ");
    scanf("%f", &valor1);

    printf("Digite o 2º valor: ");
    scanf("%f", &valor2);

    printf("\nAntes: 1º Valor = %.2f | 2º Valor = %.2f\n", valor1, valor2);
    trocar_valor(&valor1, &valor2);

    return 0;
}
