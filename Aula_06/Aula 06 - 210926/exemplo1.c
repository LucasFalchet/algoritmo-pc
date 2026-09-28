#include<stdio.h>
#include<locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    int i, numero = 1;

    while(numero>0){
        printf("\nDigite um número inteiro (zero para sair): ");
        scanf("%d", &numero);

        printf("\nTabuada do %d", numero);

        for(i=0; i<=10; i++){
            printf("\n%d * %d = %d", numero, i, (numero*i));
        }
    }

    printf("\nAgora terminou! O i é igual a: %d", i);

    return 0;
}
