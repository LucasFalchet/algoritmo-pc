#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    float nota1, nota2, media;
    printf("Calculadora de média\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a seginda nota:: ");
    scanf("%f", &nota2);
    media = (float) (nota1+nota2)/2;
    printf("Média aritmética: %.1f", media);

    return 0;
}
