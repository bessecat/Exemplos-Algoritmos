#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("\n Daqui a %d anos vc estara morto \n", idade+150);

    return 0;
}
