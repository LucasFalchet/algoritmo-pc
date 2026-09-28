#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    int i;
    float nota_aluno, quant_aprov, soma_aluno = 0;

    for(i = 1; i<= 10; i++){
        printf("Digite a nota do %dº aluno: ", i);
        scanf("%f", &nota_aluno);

        if(nota_aluno >= 6){
            soma_aluno += 1;
        }
    }

    quant_aprov = soma_aluno;

    printf("\nA quantidade de alunos aprovados foi de: %.0f alunos", quant_aprov);

    return 0;
}
