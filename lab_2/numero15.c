#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N, N1, negativos, media, qntneg;

    negativos = 0;

    printf("Insira quantos numeros voce quer avaliar: \n");
    scanf("%f", &N);

    for(int i = 1; i <= N; i++){

        printf("Insira um valor: \n");
        scanf("%f", &N1);

        if (N1 < 0){
            negativos = negativos + N1;
            qntneg += 1;
}
}
      media = negativos/qntneg;
      printf("A media dos negativos e: %.2f", media);
      printf("\n\n");
}
