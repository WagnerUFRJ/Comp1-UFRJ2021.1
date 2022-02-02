#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vendido, comissao, bruto, base;
    base = 1200;

    printf("Insira o valor vendido: \n");
    scanf("%d", &vendido);

    comissao = vendido * 0.17;
    bruto = base + comissao;

    printf("Sua comissao do mes e: %d\n", comissao);
    printf("Seu salario bruto do mes e: %d", bruto);
}
