#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");
    int cod[3];
    float valor, soma=0, maior_venda;
    int contador = 0;
    FILE *arquivo = fopen("vendas.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    while(fscanf(arquivo, "%d %f", &cod, &valor) != EOF){
          contador++;
          soma += valor;
          if(valor > maior_venda)
            maior_venda=valor;
    }

    printf("Quandidade de vendas: %d\n", contador);
    printf("Total vendido: %.2f\n", soma);
    printf("Maior venda: %.2f\n", maior_venda);

    fclose(arquivo);
    return 0;
}
