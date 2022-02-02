#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1, N2, SOMA, limite;
    limite = 15;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &N1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &N2);

    SOMA = N1 + N2;

     if(SOMA>limite){
        printf("Soma e maior que o limite");
    }
     if(SOMA==limite){
        printf("Soma e igual ao limite");
    }
     if(SOMA<limite){
        printf("Soma e menor que o limite");
    }
}
