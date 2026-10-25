#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int pot, horas;
    float consumo;

    printf("Potencia do equipamento (W)? ");
    scanf("%d", &pot);

    printf("Horas de uso por dia? ");
    scanf("%d", &horas);

    consumo = (float)(pot*horas*30)/1000;

    printf("Consumo mensal: %.2f kwh", consumo);

    return 0;
}
