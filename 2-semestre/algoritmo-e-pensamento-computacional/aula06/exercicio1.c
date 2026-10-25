#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_CTYPE,"");

    int cpf;
    float preco, total_compra = 0;

    printf("Digite seu CPF: ");
    scanf("%d", &cpf);

    for(i=0; i<5; i++){
        printf("Digite o valor do produto: R$");
        scanf("%f", &preco);

        total_compra = total_compra + preco;
    }

    printf("\nCPF: %d", cpf);
    printf("\nTotal da compra: R$%.2f", total_compra);

    return 0;
}
