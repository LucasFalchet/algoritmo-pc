#include <stdio.h>
#include <locale.h>

float calcula_media(float nota1, float nota2)
{
    return nota1 + nota2 / 2;
}

void resultado_media(float nota1, float nota2)
{
    float media = calcula_media(nota1, nota2);

    printf("Média do aluno: %.2f\n", media);

    if(media >= 7){
        printf("Aprovado!\n");
    }
    else{
        printf("Reprovado...\n");
    }
}


int main()

{
    setlocale(LC_CTYPE, "");

    float nota1, nota2;
    char resp;

    do {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        resultado_media(nota1, nota2);

        printf("\nDeseja calcular outra média? ");
        scanf("% c", resp);

    } while (resp == 's' || resp == 'S');

    return 0;
}
