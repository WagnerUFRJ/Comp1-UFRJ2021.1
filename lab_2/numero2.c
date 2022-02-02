#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura, area, perimetro;

    printf("A base de um retangulo e 5 e sua altura e 4\n");

    base = 5;
    altura = 4;

    perimetro = (base * 2) + (altura * 2);

    area = base * altura;

    printf("O perimetro e a area dele sao, respectivamente: %d, %d\n", perimetro, area);

}
