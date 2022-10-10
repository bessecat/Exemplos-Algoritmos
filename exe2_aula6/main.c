#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, resp = 1;
    printf("Informe o valor da base:\n");
    scanf("%f", &a);
    printf("Informe o valor do expoente:\n");
    scanf("%f", &b);

    for (int i=1; i<=b ;i++){
        resp = (resp*a);
    }

    printf("Resposta: %.2f", resp);

    return 0;
}
