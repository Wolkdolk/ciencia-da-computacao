#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    char municipio[50];
    float temperatura, soma_temperaturas = 0, media_regiao;
    int abaixo_de_10 = 0, i;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite o nome do %d° município: ", i);
        scanf("%s", municipio);

        printf("Digite a temperatura média de %s (°C): ", municipio);
        scanf("%f", &temperatura);

        soma_temperaturas += temperatura;

        if (temperatura < 10)
        {
            abaixo_de_10++;
        }
    }

    media_regiao = soma_temperaturas / 5;

    printf("Temperatura média da região: %.2f °C", media_regiao);
    printf("\nQuantidade de municípios com temperatura inferior a 10 °C: %d", abaixo_de_10);

    return 0;
}