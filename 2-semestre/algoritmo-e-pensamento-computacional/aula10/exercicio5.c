#include <stdio.h>
#include <locale.h>

typedef struct
{
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcular_media(Aluno *aluno)
{
    aluno->media = (aluno->nota1 + aluno->nota2)/2;
}

int main()
{
    setlocale(LC_CTYPE, "");

    Aluno aluno;
    printf("Digite o RGM do aluno:");
    scanf("%f", &aluno.rgm);
    printf("Digite a primeira nota:");
    scanf("%f", &aluno.nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &aluno.nota2);

    calcular_media(&aluno); //passar o ponteiro

    printf("RGM: %d\n", aluno.rgm);
    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
    printf("Média: %.2f\n", aluno.media);

    return 0;
}
