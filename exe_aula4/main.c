#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&num);

    if (num % 2 == 0){
        if (num>10){
            printf("SIM \n");
        }else{
            printf("NAO");}
    }else{
        if (num<50){
            printf("SIM");
        }else{
            printf("NAO");}
    }

    return 0;
}
