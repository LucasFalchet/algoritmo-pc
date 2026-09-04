#include <stdio.h>
#include<locale.h>
int main()

{
    setlocale(LC_CTYPE, "");

    float comprimento, largura, perimetro, area;
    printf("Calculador de perímetro\n");
    printf("Qual o comprimento do jardim? ");
    scanf("%f", &comprimento);
    printf("Qual a largura do jardim? ");
    scanf("%f", &largura);
    perimetro = 2*(comprimento+largura);
    area = comprimento*largura;
    printf("O perímetro do jardim é: %.2f m\n", perimetro);
    printf("A área do jardim é: %.2f m²\n", area);
    return 0;
}
