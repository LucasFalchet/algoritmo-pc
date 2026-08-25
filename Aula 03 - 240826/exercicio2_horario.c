#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    int horas, minutos, total;
    printf("Quantidade de horas? ");
    scanf("%d", &horas);
    printf("Quantidade de minutos? ");
    scanf("%d", &minutos);
    total = (horas*60) + minutos;
    printf("Já se passaram %d minutos desde o início do dia", total);

    return 0;
}
