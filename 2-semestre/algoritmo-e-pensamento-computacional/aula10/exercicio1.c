#include<stdio.h>
#include<locale.h>

float calcular_frete(float peso)
{
    return peso * 4.5;
}

void imprimir_frete(float peso)
{
    printf("O valor do frete é: R$%.2f\n", calcular_frete(peso));
}

int main()
{
    setlocale(LC_CTYPE, "");
    float peso;
    char resp;

    while(1){
        printf("\nDigite o peso: ");
        scanf("%f", &peso);
        imprimir_frete(peso);
        printf("Deseja calcular outro frete?");
        scanf(" %c", &resp);
        if (resp == 'n' || resp == 'N')
            break;
    }

    return 0;
}
