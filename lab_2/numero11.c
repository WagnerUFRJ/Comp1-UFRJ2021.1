#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N1, N2, N;

    printf("Insira uma quantidade de pares: \n");
    scanf("%d", &N);


    for(int i = 1; i <= N; i++){
        printf("Insira um numero: \n");
        scanf("%d", &N1);

        printf("Insira outro numero: \n");
        scanf("%d", &N2);

        if (N1 > N2){
           printf("%d e maior que %d \n", N1, N2);
        }
        else if(N2 > N1){
            printf("%d e maior que %d \n", N2, N1);
        }else{
           printf("IGUAIS\n");
        }
    }

    return 0;
}
