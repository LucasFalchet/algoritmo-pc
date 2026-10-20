#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float maior_venda=0, venda, total_vendido=0;
    int contador=0, alunos_aprov=0, num_venda;

    FILE *arquivo = fopen("vendas.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    while(fscanf(arquivo, "%d %f", &num_venda, &venda) != EOF){

        contador++; //quantidade de alunos

        if(venda > maior_venda){
            maior_venda = venda;
        }

        total_vendido += venda;
    }

    printf("Relatório: \n");
    printf("Quantidade de vendas: %d\n", contador);
    printf("Total vendido %.2f\n", total_vendido);
    printf("Maior venda: %.2f\n", maior_venda);

    fclose (arquivo);

    return 0;
}
