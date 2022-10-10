#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tam;
    char texto[200];
    int vo = 0 , co = 0;

    printf("Digite seu texto:\n");
    gets(texto);

    tam = strlen(texto);

    printf("\nTexto: %s\n", texto);
    printf("O tamanho da string e: %d \n",tam);

    int i=0;
    for(i; i < tam; i++){

        if(toupper(texto[i]) >= 'A' && toupper(texto[i]) <= 'Z'){
            if(texto[i] == 'a' || texto[i] == 'e'|| texto[i] == 'i'|| texto[i] == 'o'||texto[i] == 'u') {
                vo += 1;

            }else{
                co += 1;
            }
        }
    }

     printf("A quantidade de consoantes e vogais e: %d e %d",co,vo);


    return 0;
}
