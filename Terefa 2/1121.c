#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
double salario, comprometido, disponivel;
scanf("%lf%lf", &salario, &comprometido);
disponivel = salario*0.3;
if( comprometido < disponivel){
   printf("%.2lf\n", disponivel-comprometido);
}
if (comprometido == disponivel){
   printf("%.2lf\n",disponivel);
}
else if (comprometido> disponivel){
   printf("0.00\n");
}


    return 0;
}
