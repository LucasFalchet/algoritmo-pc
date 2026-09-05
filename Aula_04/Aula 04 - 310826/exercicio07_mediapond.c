#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()

{
    setlocale(LC_CTYPE, "");

    char media;
    float nota1, nota2, media_calc, media_pond;

    printf("Tipo de média (A - P)?: ");
    scanf("%c", &media);

    media = toupper(media);

    switch (media) {
        case 'A':
            printf("\nDigite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            media_calc = (nota1+nota2)/2;
            printf("\nMédia calculada: %.2f", media_calc);
            break;
        case 'P':
            printf("\nDigite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            media_pond = ((nota1 * 3)+(nota2 * 7))/(3+7);
            printf("\nMédia calculada: %.2f", media_pond);
            break;
    }

    return 0;
}
