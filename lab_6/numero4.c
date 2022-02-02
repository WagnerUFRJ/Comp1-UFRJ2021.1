#include <stdio.h>
#include <stdlib.h>



int recursividade(int vet[], int tam, int indice, int menor1){

  if(tam == 0){

  return menor1;

  }

  else {
         if(vet[indice]>vet[indice+1]){

          menor1 = vet[indice+1];
          return vet, tam - 1, indice+1;

          }
          else{

          menor1 = vet[indice];
          return vet, tam - 1, indice+1;

          }

       }
}



int main(){

int vet[20], menor=0, aux=0, n;

printf("Escreva o tamanho do vetor de 1 ate 20: ");
scanf("%d", &n);

if(n>20 || n == 0){

    printf("Quantidade invalida de elementos");
    return 0;

}

printf("\nEscreva os valores do vetor:");

for(int i = 0; i<n; i++){

    printf("\nElemento - %d: ", i);
    scanf("%d", &vet[i]);

}

/*menor = vet[0];

for(int i = 0; i<n; i++){


    aux = vet[i];

    if(aux > vet[i+1]){

        aux = vet[i+1];

    }
    if(menor > aux){

        menor = aux;

    }

}*/

printf("O menor eh: %d", recursividade(vet, n, 0, 0));



}
