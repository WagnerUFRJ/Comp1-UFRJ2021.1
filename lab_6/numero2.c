#include <stdio.h>
#include <stdlib.h>

void troca(int a, int b){

int aux;

aux = b;
b = a;
a = aux;

printf("O valor 1 depois da troca eh: %d\nO valor 2 depois da troca eh: %d", a, b);

}


int main(){

int N1, N2;

printf("Escreva um numero: ");
scanf("%d", &N1);

printf("\nEscreva um segundo numero: ");
scanf("%d", &N2);


printf("\nO valor 1 antes da troca eh: %d\nO valor 2 antes da troca eh: %d", N1, N2);
printf("\n\n");


troca(N1,N2);


}
