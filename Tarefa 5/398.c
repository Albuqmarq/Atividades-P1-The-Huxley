#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void loop(int n1,int n2,int num,int mult){
if(num==50){
printf("%d", mult);
return;
}
if (num%n1==0 && num%n2==0){

return loop(n1,n2,num+1,mult+1);
}
 return loop(n1,n2,num+1,mult);
}
int main(){
 int a,b;
 scanf("%d%d", &a,&b);
 loop(a,b,1,0);

	return 0;
}
