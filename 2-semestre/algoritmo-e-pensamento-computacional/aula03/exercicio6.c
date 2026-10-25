#include<stdio.h>
#include<locale.h>
#include<math.h>

int main ()
{
    setlocale(LC_CTYPE, "");

    float largura, comprimento, valor, area, caixa, custo;

    printf("Qual a largura da área (em metros)? ");
    scanf("%f", &largura);

    printf("Qual o comprimento da área (em metros)? ");
    scanf("%f", &comprimento);

    printf("Qual o valor da caixa? ");
    scanf("%f", &valor);

    area = largura * comprimento;

    caixa = ceil(area/2.5);

    custo = valor * caixa;

    printf("Área total a ser revestida: %.2f m²\n", area);
    printf("Quantidade de caixas necessárias: %.0f\n", caixa);
    printf("Custo total da compra: R$%.0f", custo);

    return 0;
}
