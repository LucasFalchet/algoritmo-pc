#include<stdio.h>
#include<locale.h>
int main()

{
    setlocale(LC_CTYPE, "");

    float raio, perimetro, pi = 3.14;
    printf("Calculador de perímetro\n");
    printf("Qual o valor do raio (em cm)? ");
    scanf("%f", &raio);
    perimetro = 2*pi*raio;
    printf("O valor do perímetro é: %.2f", perimetro);
    return 0;
}
