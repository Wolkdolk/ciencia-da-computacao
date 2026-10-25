#include<stdio.h>
#include<locale.h>

int main()
{
    int rgm = 123456;
    float media = 4.567788;
    printf("Dados do aluno\n");
    printf("RGM: %d\n", rgm);
    printf("Média: %.2f", media); //.2 depois da % define quantas casas decimais quero apos a virgula da variavel
    return 0;
}
