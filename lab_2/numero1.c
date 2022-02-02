#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo, saldo_novo;

  printf("Insira sua aplicacao: \n");
  scanf("%f", &saldo);

  saldo_novo = saldo * 1.15;


 printf("O seu saldo reajustado e: %f", saldo_novo);

}
