#include <stdio.h>
#include <locale.h>

float calcularArea(float largura, float comprimento)
{
    return largura * comprimento;
}

void exibir_resultado(float largura, float comprimento)
{
    printf("\n¡rea: %.1f m≤\n\n", calcularArea(largura, comprimento));
}

int main()
{
    setlocale(LC_CTYPE, "");

    float largura, comprimento;
    char opcao;

    do {
        printf("Digite a largura (m): ");
        scanf("%f", &largura);

        printf("Digite o comprimento (m): ");
        scanf("%f", &comprimento);

        exibir_resultado(largura, comprimento);

        printf("Deseja calcular outra ·rea (s/n)? ");
        scanf(" %c", &opcao);
        printf("\n");

    } while (opcao == 's' || opcao == 'S');

    return 0;
}
