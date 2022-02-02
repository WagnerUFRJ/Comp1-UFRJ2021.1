#include  <stdio.h>


// Não entendi como fazer a sequencia com recursividade

int main(){

int n;


printf("Escreva quantos numeros vai ter a sequencia: ");
scanf("%d", &n);

int vet[n];
vet[0] = 1;
vet[1] = 1;

for(int i = 2; i<n; i++){

      vet[i] = vet[i-1] + vet[i-2];

}

printf("Sequencia de Fibonacci com %d elementos:\n", n);

for(int i = 0; i<n; i++){

    printf("%d ", vet[i]);

}

}
