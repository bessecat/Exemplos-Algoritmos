#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("\nDigite o primeiro numero:\n");
    scanf("%d", &a);
    printf("\nDigite o segundo numero:\n");
    scanf("%d", &b);
    printf("\nDigite o terceiro numero:\n");
    scanf("%d", &c);

    if ((a<=b) && (b<=c))
    {
        printf("A ordem crescente dos numeros e: %d, %d, e %d", a,b,c);
        return 0;
    }
    if ((a<=c) && (c<=b))
    {
        printf("A ordem crescente dos numeros e: %d, %d, e %d", a,c,b);
        return 0;
    }
    if ((b<=a) && (a<=c))
    {
        printf("A ordem crescente dos numeros e: %d, %d, e %d", b,a,c);
        return 0;
    }
    if ((b<=c) && (c<=a))
    {
        printf("A ordem crescente dos numeros e: %d, %d, e %d", b,c,a);
        return 0;
    }
    if ((c<=a) && (a<=b))
    {
        printf("A ordem crescente dos numeros e: %d, %d, e %d", c,a,b);
        return 0;
    }
    if ((c<=b) && (b<=a))
    {
        printf("A ordem crescente dos numeros e: %d, %d, e %d", c,b,a);
        return 0;
    }

    return 0;
}
