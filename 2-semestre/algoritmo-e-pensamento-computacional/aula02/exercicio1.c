#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float raio, perimetro, circunferencia, pi = 3.14;

    printf("Qual a medida do raio (em cm)? ");
    scanf("%f", &raio);

    circunferencia = 2 * raio * pi;

    printf("O perímetro da circunferência é %.2fcm", circunferencia);

    return 0;
}
