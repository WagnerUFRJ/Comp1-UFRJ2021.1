#include <stdio.h>
#include <stdlib.h>

int main()
{
  float densidade, massa, amostra;

  printf("Insira a massa do elemento: \n");
  scanf("%f", &massa);

  printf("Insira o volume do elemento: \n");
  scanf("%f", &amostra);

  densidade = massa / amostra;

  printf("A densidade absoluta e: %.3f g/cm³", densidade);
}
