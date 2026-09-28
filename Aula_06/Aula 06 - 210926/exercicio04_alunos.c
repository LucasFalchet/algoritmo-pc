#include<stdio.h>
#include<locale.h>

int main()

{
   setlocale(LC_CTYPE, "");

    int i, quantidade;
    float nota,  media, soma=0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    for(i=0; i<quantidade; i++){
        do{
        printf("Digite a %dº nota do aluno (0-10): ", (i+1));
        scanf("%f", &nota);

        if(nota < 0 || nota > 10){
            printf("\nNota inválida! Digite uma nota válida\n\n");
        }
        else{
            soma += nota;
        }
    }

    while(nota < 0 || nota > 10);

    }
    media = soma/quantidade;

    printf("A média do aluno é: %.2f\n", media);

    return 0;
}
