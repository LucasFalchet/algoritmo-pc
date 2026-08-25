#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    int potencia, horas;
    float consumo;
    printf("Qual a potência do equipamento? (W) ");
    scanf("%d", &potencia);
    printf("Qual a quantidade de horas de uso por dia? ");
    scanf("%d", &horas);
    consumo = (float)(potencia*horas*30)/1000;
    printf("Consumo mensal total: %.2f KWh", consumo);

    return 0;
}
