#include<stdio.h>
#include<locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    int i;
    float media, soma = 0, nota, maior_nota = 0;

    for(i=0; i<5; i++){
        printf("Digite a %dº nota: ", (i+1));
        scanf("%f", &nota);
        soma += nota;

        //funciona pois ele compara com cada input que foi dado desde o começo
        if(nota > maior_nota){
            maior_nota = nota;
        }
    }

    media = soma / i;

    printf("\nA média da turma é: %.2f", media);
    printf("\nA maior nota da turma foi %.2f\n", maior_nota);

    return 0;
}
