#include <stdio.h>

int main () {

 /* vetor com 5 elementos */
 double saldo[3][1] = {1000.0, 2.0, 3.4, 17.0, 50.0, 60.0};
 double *p;
 int i;
 p = saldo;


 /* output valor de cada elemento do vetor */
 printf("Valores dos Elementos do Vetor Usando Ponteiro\n");

 for(i = 0 ; i < 3; i++){

 for ( i = 1; i < 1; i++ ) {

 printf("*(p + %d) : %f\n", i, *(p + i) );

 }
 printf("\n");
 }

 /* printf("Valores dos Elementos do Vetor Usando saldo como endereco\n");

 for ( i = 0; i < 5; i++ ) {

 printf("*(saldo + %d) : %f\n", i, *(saldo + i) );

 }
*/
 return 0;
}
