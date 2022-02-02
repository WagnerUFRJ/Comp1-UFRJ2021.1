#include <stdio.h>
#include <stdlib.h>

// As funções são utilizadas para facilitar a programação de repetições,
// se eu quisesse fazer a multiplicação de valores várias vezes bastava chamar a função multiplicação mais de uma vez


void multiplicacao(int a, int b){

 int c;
 c = a*b;

 printf("\nA multiplicacao entre eles eh: %d\n", c);

}

int main(){

int N1, N2, M;

printf("Insira um numero:");
scanf("%d", &N1);

printf("\nInsira um segundo numero:");
scanf("%d", &N2);

//M = N1*N2;

multiplicacao(N1, N2);

//printf("\nA multiplicacao entre eles eh: %d\n", M);

}

