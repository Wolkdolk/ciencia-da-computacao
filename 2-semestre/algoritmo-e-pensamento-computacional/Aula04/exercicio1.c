#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE,"");

    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = pow(b,2)-4*a*c;

    if(delta >= 0){

    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    printf("Raízes da equação: ");
    printf("\nX1: %.2f\nX2: %.2f", x1, x2);
    } else{
        printf("Não existem raízes reais!");
    }

    return 0;
}
