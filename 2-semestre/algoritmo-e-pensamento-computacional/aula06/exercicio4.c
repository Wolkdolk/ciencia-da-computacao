#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float nota, soma = 0, media, alunos;
    int i;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    for (i=0; i<alunos; i++){
        do{
            printf("\nDigite a nota do aluno (0-10): ");
            scanf("%f", &nota);
            if(nota<0 || nota >10){
                printf("Nota inválida!!! Tente outra vez!!");
            } else{
                soma += nota;
            }
        } while (nota < 0 || nota > 10);

        media = soma/3;
    }

}
