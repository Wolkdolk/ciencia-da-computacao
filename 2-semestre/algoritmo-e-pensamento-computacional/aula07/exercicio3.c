#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int alunos = 1, aprovado = 0, i;
    float nota;

    for (i=alunos; i < 11; i++)
    {
        printf("Digite a nota do %d aluno: ", i);
        scanf("%f", &nota);

        if (nota >= 6)
        {
            aprovado++;
        }

        alunos++;
    }

    printf("Alunos com nota igual ou superior a 6: %d", aprovado);

    return 0;
}