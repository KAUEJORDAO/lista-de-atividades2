#include <stdio.h>
#include <stdlib.h>


int main(void){
int n, i, maior=0, menor=2147483647;


    printf("Escreva tres numeros\n\n");

    for (i = 1; i <=3; i++){

    printf("%dro  numero: ", i);
    scanf("%d", &n);

    
   if (n>maior)
   {
    maior=n;
   }
 
   if (n< menor)
   {
    menor = n;
   }
   

    }
printf ("o maior valor foi %d\n", maior);
printf ("O menor valor foi %d", menor);


    return 0;
}
