#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");
    char linha[100];
    FILE *arquivo = fopen("notas.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 0;
    }

    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }


}
