#include<stdio.h>
#include<locale.h>

int main()

{
    setlocale(LC_CTYPE, "");

    int conta = 12345, senha = 123, user, password, tentativas = 2;

    while(1){
        printf("Digite o número de usuário: ");
        scanf("%d", &user);
        printf("Digite a senha: ");
        scanf("%d", &password);

        if(user == conta && password == senha){
            printf("Logado");
        }
        else if(tentativas > 1){
            tentativas--;
            printf("\nDados incorretos. Você ainda tem %.0d tentativas", tentativas);
        }
        else{
            printf("\nTentativas incorrétas demais, usuário bloqueado");
            break;
        }

    }

    return 0;
}
