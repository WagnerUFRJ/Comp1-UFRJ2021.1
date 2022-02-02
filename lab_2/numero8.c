#include <stdio.h>
#include <stdlib.h>

int main()
{

    float media, soma, a;
    a = 0;
    soma = 0;
    media = 0;

    for(int i=0; i<=20; i++){

        printf("Insira um numero: \n");
        scanf("%f", &a);

    soma = soma + a;

    }
    media = soma/20;

    printf("Media: %f", media);

}
