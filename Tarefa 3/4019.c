#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int fat(int x){

 
if(x==0)  return 1;
 
else  return x*fat(x-1);
 }



int main(){
int fator, n;
scanf("%d",&n);
fator=fat(n);
printf("%d", fator);


    return 0;
}
