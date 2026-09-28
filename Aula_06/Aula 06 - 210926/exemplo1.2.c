#include<stdio.h>
#include<locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    int i=0, numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d", numero);

    while( i<=10){
        printf("\n%d * %d = %d", numero, i, (numero*i));
        i++;
    }

    printf("\nAgora terminou! O i é igual a: %d", i);

    return 0;
}
