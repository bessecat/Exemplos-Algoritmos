#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tran,com,commin;

    printf("Informe o valor da transacao:\n");
    scanf("%f", &tran);

    commin = 39;

    if (tran<=2500)
    {
        com = ((tran*0.017)+30);
        if (com<39)
        {
            printf("O valor da comissao e: R$ %.2f \n", commin);
        }
        else
        {
            printf("O valor da comissao e: R$ %.2f \n", com);
        }
    }
    else if ((2500<tran) && (tran<=6250))
        {
            com = ((tran*0.0066)+56);
            printf("O valor da comissao e: R$ %.2f \n", com);
        }
        else if ((6250<tran) && (tran<=20000))
        {
            com = ((tran*0.0034)+76);
            printf("O valor da comissao e: R$ %.2f \n", com);
        }
        else if ((20000<tran) && (tran<=50000))
        {
            com = ((tran*0.0022)+100);
            printf("O valor da comissao e: R$ %.2f \n", com);
        }
        else if ((50000<tran) && (tran<=500000))
        {
            com = ((tran*0.0011)+155);
            printf("O valor da comissao e: R$ %.2f \n", com);
        }
        else if (500000<tran)
        {
            com = ((tran*0.0009)+255);
            printf("O valor da comissao e: R$ %.2f \n", com);
        }

    return 0;
    }
