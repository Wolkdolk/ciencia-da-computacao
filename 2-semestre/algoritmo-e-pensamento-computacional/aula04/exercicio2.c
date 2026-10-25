#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE,"");

    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 6){
        printf("Parabéns, você foi aprovado com média %.1f!", media);

    } else if (media >= 3.0){
        printf("Você esta de exame com média %.2f", media);
    } else {
        printf("Infelizmente você foi reprovado com média %.2f", media);
    }

    return 0;

}
