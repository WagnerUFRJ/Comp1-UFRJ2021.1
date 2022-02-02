#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, N1, negativos;

    negativos = 0;

    printf("Insira quantos numeros voce quer avaliar: \n");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){

        printf("Insira um valor: \n");
        scanf("%d", &N1);

        if (N1 < 0){
            negativos = negativos + N1;
}
}

      printf("A soma dos negativos e: %d", negativos);
      printf("\n\n");
}
