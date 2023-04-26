#include <stdio.h>
#include <stdlib.h>

int main(){
    int esc;
   

printf("Escolha uma das opcoes para saber o DDD\n");
printf ("[1] Brasilia\n");
printf ("[2] Salvador\n");
printf ("[3] Sao Paulozn");
printf ("[4] Rio de Janeiro\n");
printf ("[5] Juiz de Fora\n");
printf ("[6] Campinas\n");
printf ("[7] Vitoria\n");
printf ("[8] Belo Horizonte\n");
printf("DIGITE:");
scanf("%d", &esc);

    switch (esc)
{
case 1:
    printf("O DDD de Brasilia e 61");
    break;
case 2:
    printf("O DDD de Salvador e 71");
    break;
case 3:
    printf("O DDD de Sao Paulo e 11");
    break;

case 4:
    printf("O DDD de Rio de Janeiro e 21");
    break;

case 5:
    printf("O DDD de Juiz de Fora e 32");
    break;

case 6:
    printf("O DDD de Campinas e 19");
    break;

case 7:
    printf("O DDD de Vitoria e 27");
    break;

case 8:
    printf("O DDD de Belo Horizonte e 31");
    break;
    

default:

printf("Numero Invalido");

    break;




}
return 0;  
}

