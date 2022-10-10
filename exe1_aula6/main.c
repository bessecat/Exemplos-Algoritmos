#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    do{
        printf("\nMENU\n 1 - Pepperoni\n 2 - 4 Queijos\n 3 - Portuguesa\n 4 - Catufile\n 5 - Sair do menu\n");
        scanf("%d", &opcao);
        switch(opcao){
        case 1:
            printf("\nA pizza escolhida foi Pepperoni\n");
            break;
        case 2:
            printf("\nA pizza escolhida foi 4 Queijos\n");
            break;
        case 3:
            printf("\nA pizza escolhida foi Portuguesa\n");
            break;
        case 4:
            printf("\nA pizza escolhida foi Catufile\n");
            break;
        case 5:
            printf("\nSaindo\n");
            break;
        default: printf("\nNumero invalido\n");
        }

    }while(opcao<5);



    return 0;
}
