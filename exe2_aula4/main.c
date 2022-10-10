#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Digite o primeiro numero (1): \n");
    scanf("%d", &a);
    printf("Digite o segundo numero (2): \n");
    scanf("%d", &b);
    printf("Digite o terceiro numero (3): \n");
    scanf("%d", &c);


    if ((a>=b) && (a>=c))
    {
        printf("O maior numero e %d \n", a);
        return 0;
    }
    if ((b>=a) && (b>=c))
    {
        printf("O maior numero e %d \n", b);
        return 0;
    }
    if ((c>=b) && (c>=a))
    {
        printf("O maior numero e %d \n", c);
        return 0;
    }

    return 0;
}
