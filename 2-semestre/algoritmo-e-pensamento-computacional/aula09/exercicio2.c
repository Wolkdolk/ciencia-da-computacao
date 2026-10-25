#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    FILE *arquivo;

    char dia_semana[4];
    int i, num;
    float consumo;

    arquivo = fopen("consumo.txt", "a");

    printf("Digite a quantidade de resgistros: ");
    scanf("%d", &num);

    for(i=0;i<num;i++){
        printf("Digite o dia da semena (Ex.: seg): ");
        scanf("%3s", dia_semana);
        printf("Qual o consumo da %s: ", dia_semana);
        scanf("%f", &consumo);
        fprintf(arquivo, "%s %.1f\n", dia_semana, consumo);
    }
    printf("Arquivo criado com sucesso\n");
    fclose(arquivo);

}
