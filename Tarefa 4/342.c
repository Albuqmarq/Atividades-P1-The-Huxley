#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int caso(int x, int y){


 if(x<y){
	return 0;
 }
 if (x%y==0){
	if(y%3==0){
		return 1 + caso(x,y+1);
	}
	return caso(x,y+1) ;
 }
 else{
	return caso(x,y+1);
 }
 
}
int main() {

   int x;
   scanf("%d", &x);
  int quantidade=caso(x,1);
	 if (quantidade>0){
		printf("%d", quantidade);

	 }
	 else{
		printf("O numero nao possui divisores multiplos de 3!\n");
	 }
   
   
    return 0;
}
