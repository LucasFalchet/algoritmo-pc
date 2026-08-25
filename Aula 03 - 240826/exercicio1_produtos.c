#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    int qtd_manha, qtd_tarde, qtd_total;
    printf("Quantidade recebida pela manhã? ");
    scanf("%d", &qtd_manha);
    printf("Quantidade recebida pela tarde? ");
    scanf("%d", &qtd_tarde);
    qtd_total = (int) qtd_manha + qtd_tarde;
    printf("Total de produtos recebidos no dia: %d", qtd_total);
    return 0;
}
