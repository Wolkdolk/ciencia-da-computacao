#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float comprimento, largura, perimetro, area;

    printf("Qual o comprimento do jardim (m)? ");
    scanf("%f", &comprimento);
    printf("Qual a largura do jardim (m): ");
    scanf("%f", &largura);

    perimetro = 2 * (comprimento + largura);
    area = comprimento * largura;

    printf("Perimetro do jardim: %.2f\n", perimetro);
    printf("Área do jardim: %.2f", area);

}
