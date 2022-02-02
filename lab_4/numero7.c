#include <stdio.h>


int main(){

int N,aux, i, j, elemento;


printf("Escreva o tamanho do vetor: ");
scanf("%d", &N);

int vet[N];

printf("Escreva os elementos do vetor:\n");

for(i=0; i<N; i++){

    printf("Elemento %d - ", i);
    scanf("%d", &vet[i]);

}

for(i = 1; i < N; i++){
        for(j = 0; j < N-1; j++){
            if (vet[j] > vet[j + 1]){
                aux = vet[j + 1];
                vet[j + 1] = vet[j];
                vet[j] = aux;
            }
        }
    }

    printf("Escreva um valor que queira achar: ");
    scanf("%d", &elemento);


    for(i=0; i<N;i++){

      if(vet[i] == elemento){

       printf("O numero %d se encontra na posicao %d do vetor\n\n", elemento, i);
      }

    }

printf("O vetor e:\n\n");

for(i=0; i<N; i++){

    printf("%d ", vet[i]);

}

}
