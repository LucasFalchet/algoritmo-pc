#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    float nota1, nota2, nota3, media_pond;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media_pond = ((nota1*1)+(nota2*2)+(nota3*4))/(1+2+4);

    printf("A média ponderada é: %.2f", media_pond);

    return 0;
}
