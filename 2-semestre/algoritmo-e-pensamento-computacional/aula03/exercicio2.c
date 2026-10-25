#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int hora, minutos, total_minutos;

    printf("Hora? ");
    scanf("%d", &hora);

    printf("Minutos? ");
    scanf("%d", &minutos);

    total_minutos = (hora * 60) +  minutos;

    printf("Ja se passaram %d minutos desde o início do dia", total_minutos);

    return 0;
}
