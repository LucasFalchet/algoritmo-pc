#include <stdio.h>
#include <locale.h>

float calcular_area(float largura, float comprimento)
{
    return largura * comprimento;
}

int main()

{
    setlocale(LC_CTYPE, "");

    float largura, comprimento;
    char resp;

    do{
        printf("Digite a lagura (em metros): ");
        scanf("%f", &largura);
        printf("Digite o comprimento (em metros): ");
        scanf("%f", &comprimento);

        printf("Área: %.2f", calcular_area(largura, comprimento));

        printf("Deseja calcular outra área (S/N)? ");
        scanf(" %c", resp);

    } while(resp == 's' || resp == 'S');

    return 0;
}
