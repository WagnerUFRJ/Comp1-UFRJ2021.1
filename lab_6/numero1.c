#include <stdio.h>
#include <stdlib.h>

// As fun��es s�o utilizadas para facilitar a programa��o de repeti��es,
// se eu quisesse fazer a multiplica��o de valores v�rias vezes bastava chamar a fun��o multiplica��o mais de uma vez


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

