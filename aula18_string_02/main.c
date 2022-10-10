#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vogal(char texto[200]);
int consoante(char texto[200]);
int palavras(char texto[200]);
int main()
{
    char texto[200];

    printf("Digite seu texto:\n");
    gets(texto);

    printf("\nTexto: %s\n", texto);

    printf("%d vogais e %d consoantes.\n", vogal(texto), consoante(texto));
    printf("O texto possui %d palavras.\n", palavras(texto));

    return 0;
}
int vogal(char texto[200])
{
    int tam;
    int vo;
    tam = strlen(texto);

    for(int i=0 ; i < tam; i++){

        if(toupper(texto[i]) >= 'A' && toupper(texto[i]) <= 'Z'){
            if(texto[i] == 'a' || texto[i] == 'e'|| texto[i] == 'i'|| texto[i] == 'o'||texto[i] == 'u') {
                vo += 1;

            }
        }
    }

    return vo;
}
int consoante(char texto[200])
{
    int tam;
    int co;
    tam = strlen(texto);

    for(int i=0 ; i < tam; i++){

        if(toupper(texto[i]) >= 'A' && toupper(texto[i]) <= 'Z'){
            if(texto[i] != 'a' && texto[i] != 'e' && texto[i] != 'i' && texto[i] != 'o' && texto[i] != 'u') {
                co += 1;

            }
        }
    }

    return co;
}
int palavras(char texto[200])
{
    int tam;
    int pl=1;
    tam = strlen(texto);

    for(int i=0 ; i < tam; i++){

        if(texto[i] == ' '){
           pl += 1;
        }
    }

    return pl;
}
