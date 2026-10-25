#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    FILE *arquivo;
    int i, num;

    arquivo = fopen("tabuada.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo\n");
        scanf("%d", &num);
        return 1;
    }

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    fprintf(arquivo, "\nTabuada do %d \n", num); //tem f pra mais
    for(i=0; i<11; i++){
        fprintf(arquivo, "%d * %d = %d\n", num, i, (num*i));
    }
    printf("Arquivo criado com sucesso\n");
    fclose(arquivo);

    return 0;
}
