#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    int i, valor[8], soma = 0, contador = 0;
    float media;

    for (i = 0; i < 8; i++) {
        printf("Digite o %dº valor: ", (i + 1));
        scanf("%d", &valor[i]);
        soma += valor[i];
    }


    media = (float)soma / 8;


    for (i = 0; i < 8; i++) {
        if (valor[i] > media) {
            contador++;
        }
    }

    printf("\nMédia: %.2f\n", media);
    printf("Quantidade de valores acima da média: %d\n", contador);

    return 0;
}
