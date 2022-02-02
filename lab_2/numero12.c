#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1, N2, N, qntpares, maior, menor;

    maior = 0;
    menor = 1;

    printf("Insira uma quantidade de pares: \n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){

        printf("Insira um numero: \n");
        scanf("%d", &N1);

        printf("Insira outro numero: \n");
        scanf("%d", &N2);

        if(N1 > N2){
            maior = maior + N1;
            menor = menor * N2;
        }
        else if(N2 > N1){
            maior = maior + N2;
            menor = menor * N1;
        }else {
           qntpares = qntpares + 1;
        }

    }

    printf("\n");
    printf("A soma dos maiores de cada par e: %d", maior);
    printf("\n\n");
    printf("O produto dos menores e: %d", menor);
    printf("\n\n");
    printf("A quantidade de iguais e: %d", qntpares);
    printf("\n\n");
}
