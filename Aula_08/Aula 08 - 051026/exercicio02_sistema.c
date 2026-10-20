#include <stdio.h>
#include <locale.h>
#define TAM 8

int main()

{
    setlocale(LC_CTYPE, "");

    int i;
    float valores[TAM], soma=0, media, acima_med;

    for(i=0; i<TAM; i++){
        printf("Digite o %dº valor: ", (i+1));
        scanf("%f", &valores[i]);
        soma += valores[i];
    }

    media = soma/TAM;

    for(i=0; i<TAM; i++){
        if(valores[i] > media){
            acima_med++; //conta os salários acima da média
        }

    }

    printf("\nMedia dos valorers: %.0f\n", media);
    printf("Quantidade de valores acima da média: %.0f\n", acima_med);

    return 0;
}
