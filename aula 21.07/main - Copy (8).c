#include <stdio.h>
#include <stdlib.h>

int main() {

    int vet[] = {5,3,2,1,90,6};
    int tam = sizeof(vet)/sizeof(int);
    int min, aux;

    for(int inicio=0; inicio<tam; inicio++){

        // encontra o �ndice do menor valor a partir
        // da posi��o inicio
        min = inicio;
        for(int j=inico+1; j<tam; j++){
            if(vet[min] > vet[j]) {
                min = j;
            }
        }

        // faz a troca entre a posic�o inicio e a posi��o do m�nimo
        aux = vet[inicio];
        vet[inicio] = vet[min];
        vet[min] = aux;
    }

    // imprime vetor ordenado
    for(int i=0;i<tam;i++) {
        printf("%d ", vet[i]);
    }
    return 0;
}
