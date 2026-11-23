#include<stdio.h>
#include<locale.h>

float media(float nota1,float nota2)
{
    return (nota1 + nota2)/2;
}

void exibir_resultado(float nota1, float nota2)
{
    printf("Média do aluno: %.2f", media(nota1,nota2));

    if(media(nota1,nota2)>= 7){
        printf("\nSituação: Aprovado");
    }
    else{
        printf("\nSituação: Reprovado");
    }
}

int main()
{
    setlocale(LC_CTYPE, "");

    float nota1, nota2;
    char condicao;


    while(1)
    {

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        exibir_resultado(nota1, nota2);

        printf("\nDeseja digitar notas de outro aluno (s/n)?");
        scanf(" %c", &condicao);

        if(condicao == 'n' || condicao == 'N')
            break;
    }

    return 0;
}
