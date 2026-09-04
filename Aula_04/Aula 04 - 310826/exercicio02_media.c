#include <stdio.h>
#include <locale.h>

int main()


{
    setlocale(LC_CTYPE, "");

    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if(media>= 6.0){
        printf("\nParabéns! Você foi aprovado com média 6.0 ou maior!");
        printf("\nSua média foi de: %.2f", media);
    }
    else if(media >= 3.0){
        printf("\nVocê está de exame com média %.2f", media);
    }
     else{
        printf("\nQue pena... você não conseguiu atingir a média de 6.0 ou mais :(");
        printf("\nSua média foi de: %.2f", media);
    }

    return 0;
}
