#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    float valor_compra, juros, valor_parcela, valor_total;
    int opcao;

    printf("Valor total da compra?: \n");
    scanf("%f", &valor_compra);
    printf("Quantidade de parcelas disponíveis\n");
    printf("Opção 1: 2 vezes | 3%% de juros\n");
    printf("Opção 2: 4 vezes | 7%% de juros\n");
    printf("Opção 3: 6 vezes | 9%% de juros\n");
    printf("Opção 4: 8 vezes | 12%% de juros\n");
    printf("Escolha uma opção. \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            juros = valor_compra * 0.03;
            valor_total = valor_compra + juros;
            valor_parcela = valor_total / 2;
            printf("Valor total financiado: %.2f R$\n", valor_total);
            printf("Valor individual de cada parcela: %.2f R$\n", valor_parcela);
            break;
        case 2:
            juros = valor_compra * 0.06;
            valor_total = valor_compra + juros;
            valor_parcela = valor_total / 4;
            printf("Valor total financiado: %.2f R$\n", valor_total);
            printf("Valor individual de cada parcela: %.2f R$\n", valor_parcela);
            break;
        case 3:
            juros = valor_compra * 0.09;
            valor_total = valor_compra + juros;
            valor_parcela = valor_total / 6;
            printf("Valor total financiado: %.2f R$\n", valor_total);
            printf("Valor individual de cada parcela: %.2f R$\n", valor_parcela);
            break;
        case 4:
            juros = valor_compra * 0.12;
            valor_total = valor_compra + juros;
            valor_parcela = valor_total / 8;
            printf("Valor total financiado: %.2f R$\n", valor_total);
            printf("Valor individual de cada parcela: %.2f R$\n", valor_parcela);
            break;
        default:
            printf("Opção inválida!\n");
            printf("Digite enter para sair...");
    }

    return 0;
}
