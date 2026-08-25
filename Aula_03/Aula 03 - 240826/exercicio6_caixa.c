#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    float largura, comprimento, valor_caixa, area_total, custo_total, qt_caixas;
    printf("Qual a largura da área (em metros)? ");
    scanf("%f", &largura);
    printf("Qual o comprimento da área (em metros)? ");
    scanf("%f", &comprimento);
    printf("Qual o valor da caixa? ");
    scanf("%f", &valor_caixa);

    area_total = largura * comprimento;
    qt_caixas = area_total/2.5;
    custo_total = ceil(qt_caixas) * valor_caixa;

    printf("\nArea total a ser revestida: %.2f m²", area_total);
    printf("\nQuantidade de caixas necessárias: %.0f", ceil(qt_caixas));
    printf("\nCusto total da compra: R$ %.2f", custo_total);

    return 0;
}
