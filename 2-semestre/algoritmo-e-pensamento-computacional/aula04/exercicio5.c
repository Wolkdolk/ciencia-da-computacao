#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE,"");

    char opcao;
    int num_diarias;

    printf("Hospedagem Anália\n");
    printf("[S] Quarto simples\n");
    printf("[D] Quarto duplo\n");
    printf("[T] Quarto triplo\n");
    printf("Digite uma opção: ");
    scanf(" %c", &opcao); //Usa-se um espaco depois da primeira aspa para o 'scanf' não contabilizar o enter ao inves da letra que digitamos

    printf("Qual a quantidade de diárias? ");
    scanf("%d", &num_diarias);

    if(opcao == 's' || opcao == 'S'){
        printf("Total a pagar R$ %.2d", (num_diarias*300));
    } else if(opcao == 'd' || opcao == 'D'){
        printf("Total a pagar R$ %.2d", (num_diarias*450));
    } else if(opcao == 't' || opcao == 'T'){
        printf("Total a pagar R$ %.2d", (num_diarias*600));
    }

    return 0;
}
