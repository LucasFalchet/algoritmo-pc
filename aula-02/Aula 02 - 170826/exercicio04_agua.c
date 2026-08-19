#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    float massa_corp, agua = 35, quant_agua;

    printf("Digite a massa corporal (em kg): ");
    scanf("%f", &massa_corp);
    quant_agua = (float) (massa_corp*agua)/1000;
    printf("Quantidade aproximada de água por dia: %.2f litros", quant_agua);

    return 0;
}
