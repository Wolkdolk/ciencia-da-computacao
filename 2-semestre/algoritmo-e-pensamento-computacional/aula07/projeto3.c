#include <stdio.h>
#include <locale.h>

//Nome: Fernandpo Rodrigues Bueno

int main() {
    setlocale(LC_CTYPE, " ");

    int codigo_cadete, etapa, pontuacao, pontuacao_total, continuar;
    float media;

    printf("===== MISSÃO ORBITAL =====\n");

    do {
        pontuacao_total = 0;

        printf("Código do cadete: ");
        scanf("%d", &codigo_cadete);

        for (etapa = 1; etapa <= 3; etapa++) {
            printf("Pontuação da etapa %d: ", etapa);
            scanf("%d", &pontuacao);

            while (pontuacao < 0 || pontuacao > 100) {
                printf("Valor inválido! Digite uma pontuação entre 0 e 100: ");
                scanf("%d", &pontuacao);
            }

            pontuacao_total += pontuacao;
        }

        media = pontuacao_total / 3;

        printf("RESULTADO\n");
        printf("Cadete: %d\n", codigo_cadete);
        printf("Pontuação total: %d pontos\n", pontuacao_total);
        printf("Média: %.2f\n", media);
        printf("Classificação: ");

        if (media >= 85.0) {
            printf("COMANDANTE DA MISSÃO - Treinamento concluído com excelência.\n");
        } else if (media >= 70.0) {
            printf("PILOTO APROVADO - Cadete autorizado para a missão.\n");
        } else if (media >= 50.0) {
            printf("CADETE EM RECUPERAÇÃO - Novo treinamento recomendado.\n");
        } else {
            printf("TREINAMENTO REINICIADO - Cadete ainda não autorizado.\n");
        }

        if (pontuacao_total == 300) {
            printf("PONTUAÇÃO MÁXIMA!\n");
        }

        printf("\nAvaliar outro cadete? 1-Sim | 0-Não: ");
        scanf("%d", &continuar);
        
        while(continuar != 0 && continuar != 1) {
            printf("Resposta inválida! Avaliar outro cadete? 1-Sim | 0-Não: ");
            scanf("%d", &continuar);
        }


    } while (continuar == 1);

    printf("Sistema encerrado.\n");

    return 0;
}