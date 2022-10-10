#include <stdio.h>
#include <stdlib.h>

void lervetor (int vet[],int tam);
void zerarvetor (int vet[],int tam);
void imprimirvetor (int vet[],int tam);
int maiorelementovet (int vet[],int tam);
int menorelementovet (int vet[],int tam);
double mediaelementosvet (int vet[],int tam);

void main()
{
    int vet[5];
    int tam = 5, maior, menor;
    double media;
    lervetor(vet,tam);
    imprimirvetor(vet,tam);
    maior = maiorelementovet(vet,tam);
    printf("\nO maior elemento e: %d\n",maior);
    menor = menorelementovet(vet,tam);
    printf("\nO menor elemento e: %d\n",menor);
    media = mediaelementosvet(vet,tam);
    printf("\nA media dos elementos e: %.2lf\n",media);
    zerarvetor(vet,tam);
    imprimirvetor(vet,tam);

}
void lervetor (int vet[],int tam){

    for(int i=0; i<tam; i++){
        printf("Informe o valor:");
        scanf("%d",&vet[i]);
    }
}
void imprimirvetor (int vet[],int tam){

    for(int i=0; i<tam; i++){
        printf("Valor %d do vetor: %d\n",i,vet[i]);

    }
}
int maiorelementovet (int vet[],int tam){

    int maior = vet[0];

    for(int i=0; i<tam; i++){
        if(vet[i]>maior)
            maior = vet[i];
    }
return maior;
}
int menorelementovet (int vet[],int tam){

    int menor = vet[0];

    for(int i=0; i<tam; i++){
        if(menor>vet[i])
            menor = vet[i];
    }
return menor;
}
double mediaelementosvet (int vet[],int tam){

    double media;
    int soma;

    for(int i=0;i<tam;i++){
        soma=soma+vet[i];
        media=soma/tam;
    }
return media;
}
void zerarvetor (int vet[],int tam){

    for(int i=0; i<tam; i++){
        vet[i]=0;
    }

    printf("\nO vetor for zerado.\n");
}
