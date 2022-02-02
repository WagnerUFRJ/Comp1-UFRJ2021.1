#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N1, N2;

  printf("Digite um numero: \n");
  scanf("%d", &N1);

  printf("Digite outro numero: \n");
  scanf("%d", &N2);

  if (N1 > N2){
    printf("%d e maior que %d", N1, N2);
    return 0;
  }

  else if (N1 < N2){
        printf("%d e maior que %d", N2, N1);
  return 0;
  }
    printf("\nIGUAIS");

  return 0;

}



