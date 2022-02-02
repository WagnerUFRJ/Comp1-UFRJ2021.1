#include <stdio.h>
#include <stdlib.h>

int main()
{
   float valorcaneta, qntcaneta, nota, troco;

   printf("Informe a quantidade de canetas: \n");
   scanf("%f", &qntcaneta);

   nota = 100;
   troco = 67;

   valorcaneta = (nota - troco)/ qntcaneta;

   printf("O valor de cada caneta e: %.2f", valorcaneta);


}
