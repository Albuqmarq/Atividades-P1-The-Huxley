#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void resultado(int n, int a, int b,int c){
    if(n<a*b*c){
      printf("Falso");
      return 0;
    }
    if(n!=a*b*c) return resultado(n, a+1, b+1, c+1);
    if(n==a*b*c){
        printf("%d * %d * %d = %d\nVerdadeiro\n", a,b,c,n);
    }

}

int main(){
    int n,a,b,c;
    scanf("%d", &n);
    a=1;
    b=a+1;
    c=b+1;
    resultado(n,a,b,c);


    return 0;
}
