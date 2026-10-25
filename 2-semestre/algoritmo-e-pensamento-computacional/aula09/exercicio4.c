#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");
    char rgm[10];
    float nota, soma=0, media, maior_nota;
    int contador = 0, aprovados = 0;
    FILE *arquivo = fopen("notas.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    while(fscanf(arquivo, "%9s %f", rgm, &nota) != EOF){
          contador++;
          soma += nota;
          if(nota > maior_nota)
            maior_nota=nota;
          if(nota>=6)
            aprovados++;
    }
    media = soma/contador;

    printf("Relatório\n");
    printf("Estudantes: %d\n", contador);
    printf("Média da turma: %.1f\n", media);
    printf("Maior nota: %.1f\n", maior_nota);
    printf("Quantidade de alunos aprovados: %d", aprovados);

    fclose(arquivo);
    return 0;
}
