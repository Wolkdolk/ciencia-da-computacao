#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE,"");

    float nota, soma=0, media, maior_nota=0;
    int i;

    for(i=0; i<5; i++){
        printf("\nDigite a nota do %d° aluno: ", i+1);
        scanf("%f", &nota);

        soma = soma + nota;

        if(maior_nota<nota){
            maior_nota = nota;
        }
    }
    media = soma / i;

    printf("\nMedia da turma: %.2f", media);
    printf("\nMaior nota: %.2f", maior_nota);

    return 0;
}
