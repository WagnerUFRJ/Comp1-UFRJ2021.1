#include <stdio.h>
#include <stdlib.h>


int main(){

  int i = 10;
  char c = 'a';
  float f = 9.7;

  //declara��o de ponteiros � feita por meio do asterisco antes do nome do ponteiro, podendo varios tipos como int, float, char
  int *ptr;
  char *ptr2;
  float *ptr3;


  //ponteitos podem receber endere�os de memoria, como foi feito nessa atribui��o, o simbolo "&" significa que estou acessando o endere�o de determinada variavel
  ptr = &i;
  ptr2 = &c;
  ptr3 = &f;


  //podemos ver o valor e o endere�o apontados pelos ponteiros, com o "*" podemos ver o valor e sem o "*" observamos o endere�o pelo printf
  printf("Valor de i = %i - Endereco de i = %i\n", *ptr, ptr);
  printf("Valor de c = %c - Endereco de c = %x\n", *ptr2, ptr2);
  printf("Valor de f = %f - Endereco de f = %x\n", *ptr3, ptr3);




  getchar();



}
