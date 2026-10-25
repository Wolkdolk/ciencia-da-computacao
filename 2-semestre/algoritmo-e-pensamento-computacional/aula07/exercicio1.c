#include <stdio.h>
#include <locale.h>

int main()  
{
    setlocale(LC_CTYPE, " ");

    int qntn, num, i, par=0, impar=0;

    printf("Digite a quantidade de números a ser analisados: ");
    scanf("%d", &qntn);

    for(i = qntn; i > 0; i--)
    {
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num==0)
        {
            continue;
        }
        else if (num%2==0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("Números Impares: %d", impar);
    printf("\nNúmeros Pares: %d", par);

    return 0;
}