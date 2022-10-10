#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *a);

int main()
{
    int i, vet[10];

    for(i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    insertion_sort(vet);

    printf("\nValores ordenados\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", vet[i]);
    }
    return 0;
}

void insertion_sort(int *a)
{
    int i, j, aux;

    for(i = 1; i < 10; i++)
    {
        aux = a[i];
        for(j = i-1; j >= 0 && aux < a[j]; j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = aux;
    }
}
