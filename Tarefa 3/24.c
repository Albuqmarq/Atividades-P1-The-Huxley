#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int Fat(int a){
    if(a==0){
        return 1;
    }
    else if(a>0){
       int conta = a*Fat(a-1);
       return conta; 
    }
 }
 void fatorial(){
    int num;
    scanf("%d",&num);
    if(num == -1){
        return 0;
    }
    else if (num>=0 && num<13){
        printf("%d\n",Fat(num));
        fatorial();
    }
 }


int main(){
    fatorial();
    return 0;
}
