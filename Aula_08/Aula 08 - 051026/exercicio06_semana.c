#include <stdio.h>
#include <locale.h>
#define TAM 7

int main()
{
    setlocale(LC_CTYPE, "");

    int i, dias_acima = 0;
    float temperatura[TAM];
    float soma = 0;
    float media, maior, menor;


    for (i = 0; i < TAM; i++) {
        printf("Digite a temperatura do %dº dia: ", i + 1);
        scanf("%f", &temperatura[i]);

        soma += temperatura[i];
    }


    media = soma / TAM;


    maior = temperatura[0];
    menor = temperatura[0];

    for (i = 0; i < TAM; i++) {

        if (temperatura[i] > maior) {
            maior = temperatura[i];
        }

        if (temperatura[i] < menor) {
            menor = temperatura[i];
        }

        if (temperatura[i] > media) {
            dias_acima++;
        }
    }


    printf("\nMédia: %.2f °C\n", media);
    printf("Maior temperatura: %.2f °C\n", maior);
    printf("Menor temperatura: %.2f °C\n", menor);
    printf("Dias acima da média: %d\n", dias_acima);

    return 0;
}
