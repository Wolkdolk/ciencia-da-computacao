#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE,"");

    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    if(imc < 20.0){
        printf("Seu IMC é %.2f indica que você esta abaixo do peso", imc);
    } else if (imc > 20){
        printf("Seu IMC é %.2f indica que você esta no peso normal", imc);
    } else if (imc > 25){
        printf("Seu IMC é %.2f indica que você esta sobrepeso", imc);
    } else if (imc > 30){
         printf("Seu IMC é %.2f indica que você esta obeso", imc);
    } else{
        printf("Seu IMC é %.2f indica que você esta obeso mórbido", imc);
    }

    return 0;

}
