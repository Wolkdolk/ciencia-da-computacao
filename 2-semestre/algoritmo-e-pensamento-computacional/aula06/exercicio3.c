#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int num, soma=0;

    do {
            printf("Digite um número: ");
            scanf("%d", &num);

        if(num & 2 != 0){
            soma = soma + num;
        }
    } while(num !=0);

    printf("Soma dos números ímpares: %d", soma);

    return 0;
}
