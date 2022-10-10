#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;

    printf("Digite o primeiro valor: \n");
    scanf("%lf", &a);
    printf("Digite o segundo valor: \n");
    scanf("%lf", &b);

    printf("\nSoma dos valores: %.2lf \n", a+b);
    printf("Diferenca dos valores: %.2lf \n", a-b);
    printf("Multiplicacao dos valores: %.2lf \n", a*b);
    printf("Divisao dos valores: %.2lf \n", a/b);

    return 0;
}
