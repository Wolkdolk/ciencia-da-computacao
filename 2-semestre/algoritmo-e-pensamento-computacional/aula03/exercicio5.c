#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float peso, altura, imc;

    printf("Qual o peso da pessoa em kg? ");
    scanf("%f", &peso);

    printf("Qual a altura da pessoa em metros? ");
    scanf("%f", &altura);

    imc = peso/(pow(altura, 2));

    printf("O índice de massa corporal é: %.2f kg/m²", imc);

    return 0;
}
