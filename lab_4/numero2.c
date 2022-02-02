#include <stdio.h>
#include <stdlib.h>

int main()
{

int N1, N2, N3, i, aux, j;

    printf("Escreva um tamanho para o vetor: ");
    scanf("%d", &N1);

    int a[N1];

    for(i = 0; i < N1; i++){
         printf("Escreva %d numeros para preencher o vetor: ", N1);
        scanf("%d", &a[i]);
    }

    printf("Escreva um tamanho para o segundo vetor: ");
    scanf("%d", &N2);

    int b[N2];

    for(i = 0; i < N2; i++){
        printf("Escreva %d numeros para preencher o segundo vetor: ", N2);
        scanf("%d", &b[i]);
    }


    printf("\nVetor 1: ");
    for(j = 0; j<N1; j++){
        printf("%2d  ", a[j]);
    }
    printf("\nVetor 2: ");
    for(j = 0; j<N2; j++){
        printf("%2d  ", b[j]);
    }

    N3 = N1 + N2;
    int c[N3];

    for (i = 0; i < N1; i++){
        c[i] = a[i];
    }
    for (i = 0; i < N2; i++){
        c[N1] = b[i];
        N1++;
    }

    for(i = 1; i < N3; i++){
        for(j = 0; j < N3-1; j++){
            if (c[j] > c[j + 1]){
                aux = c[j + 1];
                c[j + 1] = c[j];
                c[j] = aux;
            }
        }
    }

    printf("\nVetor 3 com os valores de 1 e 2 ordenados: ");
    for(j = 0; j<N3; j++){
        printf("%2d  ", c[j]);
    }

   return 0;
}


