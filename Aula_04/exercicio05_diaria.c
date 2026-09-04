#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
    setlocale(LC_CTYPE, "");

    char opcao;
    int num_diarias;

    printf("Hospedagem Anália C\n");
    printf("[S] Quarto simples\n");
    printf("[D] Quarto simples\n");
    printf("[T] Quarto simples\n");
    printf("Digite uma opção: \n");
    scanf(" %c", &opcao);

    printf("Qual a quantidade de diárias?: ");
    scanf("%d", &num_diarias);

    if(opcao == 's' || opcao == 'S'){
        printf("Total a pagar R$%.2d", (num_diarias*300));
    }
    else if(opcao == 'd' || opcao == 'D'){
        printf("Total a pagar R$%.2d", (num_diarias*450));
    }
    else if(opcao == 't' || opcao == 'T'){
        printf("Total a pagar R$%.2d", (num_diarias*600));
    }
    else{
        printf("Opção inválida!");
    }
    return 0;
}
