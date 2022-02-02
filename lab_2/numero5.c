#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1, N2, N3, N4, N5, SOMA, PRODUTO, MEDIA;

    N1 = 7;
    N2 = 9;
    N3 = 4;
    N4 = 6;
    N5 = 1;

    SOMA = N1 + N2 + N3 + N4 + N5;
    PRODUTO = N1 * N2 * N3 * N4 * N5;
    MEDIA = (N1 + N2 + N3 + N4 + N5)/ 5;

    printf("A soma, produto e media sao, respectivamente: %d,\n %d\n e %d", SOMA, PRODUTO, MEDIA);

}
