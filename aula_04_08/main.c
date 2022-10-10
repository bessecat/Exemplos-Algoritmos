#include <stdio.h>
#include <stdlib.h>

int main() {

    char texto[1000];
    char contador[128];

    printf("digite um texto:");
    gets(texto);

    for(int i=0;i<128;i++){
        contador[i]=0;
    }

    for(int i=0;i<strlen(texto);i++){
        contador[texto[i]]++;

    }
    for(int i=0;i<128;i++){
        if(contador[i]){
            printf("%c %d\n",i,contador[i]);
        }
    }

    return 0;
}
