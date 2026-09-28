#include<stdio.h>
#include<locale.h>

int main()

{
   setlocale(LC_CTYPE, "");

   int i, numero, soma=0;

   do{
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numero%2 !=0){
        soma+=numero;
    }

    }
    while (numero > 0);

    printf("A soma dos números ímpares é: %d\n", soma);

    return 0;
}
