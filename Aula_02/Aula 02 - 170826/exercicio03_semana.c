#include <stdio.h>
#include<locale.h>
int main()

{
    setlocale(LC_CTYPE, "");

    int quant_semana;
    float tempo_gest;
    printf("Qual a quantidade de semanas da gestação? ");
    scanf("%d", &quant_semana);
    tempo_gest = (float) (quant_semana*7)/30;
    printf("Tempo de gestação aproximado: %.2f meses", tempo_gest);
    return 0;
}
