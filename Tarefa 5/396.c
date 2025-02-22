#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void loop(double total,int multas ){
int carro;
scanf("%d",&carro);
if(carro==999){
	printf("%.2lf\n",total);
	printf("%d\n", multas);
	return;
}

if(carro>2){
	double valor=(carro-2)*12.89;
	loop(total+=valor,multas+1);
}
else{
    loop(total,multas);
}
}
int main(){

loop(0,0);
 
	return 0;
}
