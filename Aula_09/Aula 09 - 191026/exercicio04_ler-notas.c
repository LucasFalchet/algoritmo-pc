#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    char rgm[10];
    float soma=0, media, maior_nota=0, nota;
    int i, contador=0, alunos_aprov=0;

    FILE *arquivo = fopen("notas.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    while(fscanf(arquivo, "%9s %f", rgm, &nota) != EOF){
        soma += nota;
        contador++;
        if(nota > maior_nota){
            maior_nota = nota;
        }
        if(nota >= 6){
            alunos_aprov++;
        }
    }

    media = soma/contador;
    printf("Relatório: \n");
    printf("Quantidade de estudantes: %d\n", contador);
    printf("Média da turma: %.1f\n", media);
    printf("Maior nota: %.1f\n", maior_nota);
    printf("Alunos aprovados: %d\n", alunos_aprov);

    fclose (arquivo);

    return 0;
}
