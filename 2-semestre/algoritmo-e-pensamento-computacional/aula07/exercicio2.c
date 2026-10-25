#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, " ");
    
    int dias=7;
    float valor_total=0, valorvenda;

    while(dias>0)
    {
        printf("Digite o valor de vendas do dia: ");
        scanf("%f", &valorvenda);

        valor_total+=valorvenda;

        dias--;
    }
    
    printf("O valor total de vendas da semana foi: R$%.2f", valor_total);

    return 0;
}