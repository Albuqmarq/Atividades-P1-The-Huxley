#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void loop(int cont, int qtd,int cap, int pessoas){
	if(cont==0){
     if(cap>=1){
		printf("S");
	 }
	 else{
		printf("N");
	 }
		return;
	}
	int sai, ent;
	scanf("%d%d", &sai,&ent);
    pessoas=pessoas + ent-sai;
	if(pessoas>qtd){

    return loop(cont-1,qtd,cap+1,pessoas);
	}
	else{
     return loop(cont-1,qtd,cap,pessoas);
	}

}
int main(){
int cont,qtd;
scanf("%d%d", &cont, &qtd);

loop(cont,qtd,0,0);
 
	return 0;
}
