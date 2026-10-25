#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int n1, n2, som, sub, mult;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    som = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;

    printf("Soma: %d\n", som);
    printf("Subtração: %d\n", sub);
    printf("Multiplicação: %d\n", mult);
}
