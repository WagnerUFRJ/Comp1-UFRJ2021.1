#include <stdio.h>
#include <stdlib.h>

int main()
{

int N, i, copia, a, j;

    printf("Escreva um tamanho para o vetor: ");
    scanf("%d", &N);

    int fim =(N-1),vet[N-1];

    for(i = 0; i < N; i++){
        printf("Escreva um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nVetor original: ");
    for(j = 0; j<N; j++){
        printf("%2d  ", vet[j]);
    }


    for(a = 0; a < N/2; a++){

         copia = vet[a];
         vet[a] = vet[fim];
         vet[fim] = copia;
         fim--;

        }

    printf("\nVetor modificado: ");
    for(a = 0; a<N; a++){
        printf("%2d  ", vet[a]);
    }

   return 0;
}




