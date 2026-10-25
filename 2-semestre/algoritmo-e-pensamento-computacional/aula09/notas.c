#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    FILE *arquivo;

    char rgm[10];
    int i, num;
    float nota;

    arquivo = fopen("notas.txt", "a");

    printf("Digite a quantidade de resgistros: ");
    scanf("%d", &num);

    for(i=0;i<num;i++){
        printf("Digite o RGM (Ex.: 1234567-8): ");
        scanf("%9s", rgm);
        printf("Digite a nota: ");
        scanf("%f", &nota);
        fprintf(arquivo, "%s %.1f\n", rgm, nota);
    }
    printf("Arquivo criado com sucesso\n");
    fclose(arquivo);

}
