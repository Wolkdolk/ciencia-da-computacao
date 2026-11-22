#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 4

int main()
{
    setlocale(LC_CTYPE, "");

    int i, j, aluno_maior = 0;
    float nota[LIN][COL], soma;
    float media, maior_media = 0;

    for(i = 0; i < LIN; i++) {
        soma = 0;

        for(j = 0; j < COL; j++) {
            printf("Digite a %dº nota do %dº aluno: ", (j + 1), (i + 1));
            scanf("%f", &nota[i][j]);
            soma += nota[i][j];
        }

        media = soma / COL;
        printf("Média do %dº aluno: %.2f\n", (i + 1), media);

        if (i == 0 || media > maior_media) {
            maior_media = media;
            aluno_maior = i + 1;
        }
    }

    printf("O estudante com a maior média é o %dº aluno, com média de %.2f.\n", aluno_maior, maior_media);

    return 0;
}
