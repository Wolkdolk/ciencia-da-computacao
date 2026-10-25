#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float nota1, nota2, nota3, media_ponderada;

    printf("Digite a Nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a Nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a Nota 3: ");
    scanf("%f", &nota3);

    media_ponderada = (nota1 + (nota2 * 2) + (nota3 * 4)) / (1 + 2 + 4);

    printf("A média ponderada é: %.2f", media_ponderada);

    return 0;
}
