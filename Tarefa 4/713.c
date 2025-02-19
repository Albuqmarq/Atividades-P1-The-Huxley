#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void multiplicaN(int n, int a, int b){
   
     if(a<=b){
        if(a%n==0){
            printf("%d\n", a);
        }
        return multiplicaN(n, a+1, b);
     }
     if(n>b){
        printf("INEXISTENTE");
     }
    
     
}



int main(){
    int N,A,B;
    scanf("%d%d%d", &N, &A, &B);
  multiplicaN(N,A,B);
   


    return 0;
}
