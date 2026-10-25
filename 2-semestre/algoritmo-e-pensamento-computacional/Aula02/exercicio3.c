#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int semanas;
    float meses;

    printf("Qual a quantidade de semanas de gestação? ");
    scanf("%d", &semanas);

    meses = (float) (semanas * 7) / 30;

    printf("Tempo de gestação aproximado: %.1f", meses);
}
