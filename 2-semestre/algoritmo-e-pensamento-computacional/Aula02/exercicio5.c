#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int nota1, nota2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    media = (float) (nota1 + nota2) / 2;

    printf("Media aritimética: %.2f", media);
}
