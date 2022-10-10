#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,g,c,x,z,e,d,n;

    printf("Informe o ano desejado: \n");
    scanf("%d", &y);

    if(y>1582){
        g=(y%19)+1;
        c=(y%100)+1;
        x=(3*c)/4;
        z=(((8*c)+5)%25)-5;
        e=(((11*g)+20)+(z-x))%30;
        if(e=24){
            e++;
        }
        n=(44-e);
        if(n<21){
            n=(n+30);
        }
        d=((5*y)%4)-(x+10);
        n=(n+7)-((d+n)%7);
        if(n>31){
            printf("\nA pascoa e no dia %d de abril.", n-31);
        }else{
            printf("\nA pascoa e no dia %d de marco.", n);
        }


    }else{
        printf("Ano invalido.\n");
    }

    return 0;
}
