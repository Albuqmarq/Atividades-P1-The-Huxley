#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int MDC(int n1,int n2){
    if(n2==0) return n1;
    else return MDC(n2, n1%n2);
 }


int main(){
int numero1,numero2;
scanf("%d %d",&numero1,&numero2);
int resultado;
resultado = MDC(numero1,numero2);
printf("%d",resultado);
    return 0;
}
