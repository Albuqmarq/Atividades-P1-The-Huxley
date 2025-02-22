#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void loop(double valor,int enfeites){
if (enfeites==0){
printf("%.2lf\n%.2lf", valor, valor/21);

	return;
}
int qtd;
double preco;
scanf("%d %lf",&qtd, &preco);
return loop(valor += qtd*preco, enfeites-1);

}
int main(){

double valor;
scanf("%lf", &valor);

loop(valor,3);
 
	return 0;
}
