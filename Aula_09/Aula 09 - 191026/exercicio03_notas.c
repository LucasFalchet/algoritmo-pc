#include <stdio.h>
#include <locale.h>

int main()
{
    FILE *arquivo;
    setlocale(LC_CTYPE, "");

    int i, num;
    char rgm[10]; //essa
    float nota; //essa

    arquivo = fopen("notas.txt", "a"); //essa

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo");
        return 1;
    }

    printf("Digite o número de alunos: ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        printf("digite o seu RGM: "); //rgm
        scanf("%9s", rgm); //rgm
        printf("Qual a nota do aluno: ", nota);//nota
        scanf("%f", &nota); //nota
        fprintf(arquivo, "%s %.1f\n", rgm, nota);//rgm nota
    }

    printf("\nArquivo criado com sucesso!");
    fclose(arquivo);

    return 0;
}
