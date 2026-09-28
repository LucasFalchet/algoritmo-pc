#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    int i, quant_valor, quant_pos = 0, quant_neg = 0;
    float numero, maior_valor = 0;

    printf("Insira a quantidade de valores a serem analisados: ");
    scanf("%d", &quant_valor);

    for(i=0; i < quant_valor; i++){
        printf("Digite um número real: ");
        scanf("%f", &numero);

        if(numero > 0){
            quant_pos += 1;
        }
        else if(numero < 0){
            quant_neg += 1;
        }

        if(i == 0){
            maior_valor = numero;
        }
        else if(numero > maior_valor){
            maior_valor = numero;
        }
    }

    printf("\nQuantidade de valores positivos: %d", quant_pos);
    printf("\nQuantidade de valores negativos: %d", quant_neg);
    printf("\nMaior valor: %.2f", maior_valor);

    return 0;
}
