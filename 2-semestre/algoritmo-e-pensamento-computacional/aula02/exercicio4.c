#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int massa;
    float agua_recomendada;

    printf("Digite a massa corporal (em kg): ");
    scanf("%d", &massa);

    agua_recomendada = (float) (massa * 35) / 1000;

    printf("Quantidade aproximada de agua recomendada por dia: %.1f litros", agua_recomendada);
}
