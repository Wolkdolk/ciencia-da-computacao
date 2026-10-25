#include<stdio.h>

int main()
{
    int quantidade;
    float preco_unitario, valor_final;
    printf("Qual a quantidade de café? ");
    scanf("%d", &quantidade); // o scanf define o que vou receber com "d" (neste caso int) e o & atribui a variavel
    printf("Qual o preço unitário? R$ ");
    scanf("%f", &preco_unitario);
    valor_final = quantidade*preco_unitario;
    printf("Total a pagar: R$ %.2f", valor_final);
    return 0;
}
