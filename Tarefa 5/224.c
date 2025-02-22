#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void loop(int maiorNum){
int num;
scanf("%d", &num);

if (num==0){
	printf("%d", maiorNum);
	return;
}
if (num>maiorNum){

	return loop(maiorNum=num);
}
else{
	return loop(maiorNum);
}
}
int main(){

loop(0);
 
	return 0;
}
