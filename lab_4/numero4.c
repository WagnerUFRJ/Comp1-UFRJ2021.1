#include <stdio.h>



int main(){

int M, i, j, soma1=0,soma2=0, subtracao=0;


printf("Escreva a dimensao da matriz quadrada: ");
scanf("%d", &M);


int matriz[M][M];


printf("\nEscreva os elementos da matriz: ");


for(i = 0; i < M; i++){

    for(j = 0; j < M; j++){


        printf("\nElemento %d da coluna %d = ", i, j);
        scanf("%d", &matriz[i][j]);

    }
}

system("cls");

printf("Matriz informada:\n");

for(i = 0; i < M; i++){

    for(j = 0; j < M; j++){


        printf("%d ", matriz[i][j]);


    }
    printf("\n");
}

int matrizT[M][M];

for(j = 0; j < M; j++){

    for(i = 0; i < M; i++){


        matrizT[j][i] = matriz[i][j];


    }

}

 for(i = 0; i < M; i++){

    soma1 = soma1 + matriz[i][i];


    }


for(i = 0; i < M; i++){

    for(j = 0; j < M; j++){

     if((i+j)==(M-1)){

        soma2 = soma2 + matriz[i][j];

     }

    }
}

  subtracao = soma1 - soma2;

  printf("A soma da diagonal principal e %d\nA soma da diagonal secundaria e %d\nA subtracao das diagonais e %d", soma1,soma2, subtracao);

  printf("\nMatriz Transposta:\n");

for(j = 0; j < M; j++){

    for(i = 0; i < M; i++){


        printf("%d ", matrizT[j][i]);


    }
    printf("\n");
}
}
