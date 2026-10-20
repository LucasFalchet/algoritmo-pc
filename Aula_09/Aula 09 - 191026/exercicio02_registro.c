#include <stdio.h>
#include <locale.h>

int main()
{
    FILE *arquivo;
    setlocale(LC_CTYPE, "");

    int i, num;
    char dia_semana[4];
    float consumo;

    arquivo = fopen("consumo.txt", "a");

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo");
        return 1;
    }

    printf("Digite o número de registros: ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        printf("Digite o dia da semana (Ex: seg): ");
        scanf("%3s", dia_semana);
        printf("Qual o consumo da %s: ", dia_semana);
        scanf("%f", &consumo);
        fprintf(arquivo, "%s %.1f\n", dia_semana, consumo);
    }

    printf("\nArquivo criado com sucesso!");
    fclose(arquivo);

    return 0;
}
