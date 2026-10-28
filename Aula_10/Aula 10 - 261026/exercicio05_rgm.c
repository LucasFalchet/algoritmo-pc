#include <stdio.h>
#include <locale.h>

typedef struct
{
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;

float calcula_media(Aluno *aluno)
{
    aluno ->media = (aluno->nota1 + aluno->nota2)/2;
}

int main()

{
    setlocale(LC_CTYPE, "");

    Aluno aluno1;
    printf("Digite o RGM do aluno: ");
    scanf("%d", &aluno1.rgm);

    printf("Digite a 1ª nota do aluno: ");
    scanf("%d", &aluno1.nota1);

    printf("Digite a 2ª nota do aluno: ");
    scanf("%d", &aluno1.nota2);

    calcula_media(&aluno1); //passar o ponteiro
    printf("RGM: %d\n", aluno1.rgm);
    printf("Média: %.2f\n", aluno1.media);

    return 0;
}
