#include <stdio.h>

int main(){

int N, j, igual = 0;

printf("Informe quantos elementos no vetor de entrada N:\n");
scanf("%d", &N);

int a[N];

printf("Informe os %d valores do vetor:\n");

for(int i = 0; i < N; i++){

    printf("Elemento %d - ", i);
    scanf("%d", &a[i]);

}

for(j = 0; j < N; j++){


   for(int t = j+1; t < N; t++){

    if(a[j] == a[t]){

        igual += 1;

    }

}


}


printf("\nTotal de elementos  duplicados = %d", igual);




}
