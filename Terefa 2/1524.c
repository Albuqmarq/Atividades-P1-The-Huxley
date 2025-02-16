#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  double salario;
  scanf("%lf", &salario);

if(salario <= 280){
    printf("%.2lf\n%d\n%.2lf\n%.2lf\n", salario, 20, salario*1.20-salario, salario*1.20);
}
if (salario > 280 && salario <700){
    printf("%.2lf\n%d\n%.2lf\n%.2lf\n", salario, 15, salario*1.15-salario, salario*1.15);
}
if ( salario >= 700 && salario < 1500){
    printf("%.2lf\n%d\n%.2lf\n%.2lf\n", salario, 10, salario*1.1-salario, salario*1.1);
}
if (salario >= 1500){
    printf("%.2lf\n%d\n%.2lf\n%.2lf\n", salario, 5, salario*1.05-salario, salario*1.05);
}
    return 0;
}
