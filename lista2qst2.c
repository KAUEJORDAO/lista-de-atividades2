#include <stdio.h>
#include <stdlib.h>

int main(){
float sal, pemp, psal;
printf ("informe o salario: ");
scanf("%f", &sal);
printf("Informe o valor da prestacao do emprestimo: ");
scanf("%f", &pemp);
psal= (sal*20)/100;

if (pemp>psal)
{
    printf("Emprestimo nao concedido");
}
else{
    printf("Emprestimo concedido");
}







    return 0;
}