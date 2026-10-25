#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int conta = 12345, senha = 123, user, pass, tentativas = 2;

    while(1){
        printf("\nConta: ");
        scanf("%d", &user);
        printf("Senha: ");
        scanf("%d", &pass);

        if(conta == user && senha == pass){
            printf("Acesso autorizado");
            break;
        } else if (tentativas > 0){
            tentativas--;
            printf("\nDados Incorretos");
            printf("\nVocê ainda tem %d tentativas", tentativas+1);
        } else{
            printf("Usuario Bloqueado");
            break;
        }
    }

}
