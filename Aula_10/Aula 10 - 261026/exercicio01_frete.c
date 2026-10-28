#include <stdio.h>
#include <locale.h>

float calcular_frete(float peso)
{
    return peso * 4.50;
}

void imprimir_frete(float peso)
{
    printf("Valor do frete: %.2f R$\n", calcular_frete(peso));
}

int main()

{
    setlocale(LC_CTYPE, "");

    float peso;
    char resp;

    while(1){
        printf("Digite o peso (kg): ");
        scanf("%f", &peso);

        imprimir_frete(peso);

        printf("\nDeseja calcular outro frete? ");
        scanf(" %c", &resp);

        if (resp == 'n' || resp == 'N'){
            break;
        }

    }
    return 0;
}
