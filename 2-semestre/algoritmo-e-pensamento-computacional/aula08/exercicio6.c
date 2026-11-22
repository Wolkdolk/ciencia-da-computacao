#include <stdio.h>
#include <locale.h>
#define TAM 7

int main()
{
    setlocale(LC_CTYPE, "");

    int i, acima_media = 0;
    float temp[TAM], soma = 0, media, maior, menor;
    char dias[7][4] = {"seg", "ter", "qua", "qui", "sex", "sáb", "dom"};

    for(i = 0; i < TAM; i++) {
        printf("Digite a temperatura da [%s]: ", dias[i]);
        scanf("%f", &temp[i]);
        soma += temp[i];

        if(i == 0) {
            maior = temp[i];
            menor = temp[i];
        } else {
            if(temp[i] > maior)
                maior = temp[i];
            if(temp[i] < menor)
                menor = temp[i];
        }
    }

    media = soma / TAM;

    for(i = 0; i < TAM; i++) {
        if(temp[i] > media) {
            acima_media++;
        }
    }

    printf("\nMédia: %.2f °C\n", media);
    printf("Maior temperatura: %.2f °C\n", maior);
    printf("Menor temperatura: %.2f °C\n", menor);
    printf("Dias acima da média: %d\n", acima_media);

    return 0;
}
