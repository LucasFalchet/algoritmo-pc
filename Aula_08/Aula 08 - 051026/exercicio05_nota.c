#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 4


int main()
{
    setlocale(LC_CTYPE, "");

    int i, j, soma_notas, achei;
    float media, acima_media = 0, notas[LIN][COL];


    for (i = 0; i < LIN; i++) {
        soma_notas = 0;

        printf("Digite as 4 notas do %dº estudante:\n", i + 1);

        for (j = 0; j < COL; j++) {
            scanf("%f", &notas[i][j]);
            soma_notas += notas[i][j];
        }


        media = soma_notas / (float)COL;

        printf("Média do estudante %d: %.2f\n", i + 1, media);


        if (media > acima_media) {
            acima_media = media;
            achei = i;
        }
    }

    printf("Maior média: estudante %d - %.2f\n",
           achei + 1, acima_media);

    return 0;
}
