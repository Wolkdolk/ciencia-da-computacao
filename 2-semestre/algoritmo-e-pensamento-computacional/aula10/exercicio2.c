#include<stdio.h>
#include<locale.h>

void trocar(int *a, int *b){
    int auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

int main(){

    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    trocar(&a,&b); //passagem por referencia (endereço)

    printf("Valor de a: %d", a);
    printf("\nValor de b: %d", b);

    return 0;
}
