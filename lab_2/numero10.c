#include <stdio.h>
#include <stdlib.h>

   void comparadorNumeros(int N1, int N2, int N3){


   if (N1 > N2){
      if (N2 > N3){
        printf("%d e o maior e %d o menor\n", N1,N3);
      }else{
         if(N1 > N3){
            printf("%d e o maior e %d o menor\n", N1, N2);
         }else {
           printf("%d e o maior e %d o menor\n", N3, N2);
         }
      }
  }

   else if (N2 > N1){
      if (N1 > N3){
        printf("%d e o maior e %d o menor\n", N2,N3);
      }else{
         if(N2 > N3){
            printf("%d e o maior e %d o menor\n", N2, N1);
         }else {
           printf("%d e o maior e %d o menor\n", N3, N1);
         }
      }
  }else {
      printf("TODOS IGUAIS");
  }
}


 int main()
{

   int numerosUm, numerosDois, numerosTres;

   printf("Digite um numero: \n");
   scanf("%d", &numerosUm);

   printf("Digite outro numero: \n");
   scanf("%d", &numerosDois);

   printf("Digite outro numero: \n");
   scanf("%d", &numerosTres);

   comparadorNumeros(numerosUm, numerosDois, numerosTres);

}


