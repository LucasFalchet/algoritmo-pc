#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    int i;
    float valor_vendas, total_vendido, soma_vendas = 0;

    for(i = 1; i <= 7; i++){
        do{
            printf("Digite o valor das vendas totais do %dº dia: R$", i);
            scanf("%f", &valor_vendas);

            if(valor_vendas < 0){
                printf("\nO valor não pode ser negativo!\n\n");
            }
        } while(valor_vendas < 0);

        soma_vendas += valor_vendas;

    }

    total_vendido = soma_vendas;

    printf("\nValor total vendido da semana: R$%.2f", total_vendido);

    return 0;
}
