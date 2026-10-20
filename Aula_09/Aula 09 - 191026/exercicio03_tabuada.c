#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    char linha[100];
    FILE *arquivo = fopen("consumo.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }

    printf("\nArquivo criado com sucesso!\n");
    fclose (arquivo);

    return 0;
}
