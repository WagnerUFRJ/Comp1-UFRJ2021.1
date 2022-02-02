#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade, meses, dias, emdias;

    printf("Insira sua idade em anos: \n");
    scanf("%d", &idade);

    printf("Insira quantos meses faz que voce fez essa idade: \n");
    scanf("%d", &meses);

    printf("Insira quantos dias sobraram : \n");
    scanf("%d", &dias);

    emdias = (idade * 365) + (meses * 30) + dias;

    printf("Sua idade convertida para dias e: %d", emdias);

}
