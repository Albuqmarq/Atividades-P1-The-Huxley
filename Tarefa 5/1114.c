#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double seq(int n2, int n){
    if (n2==n+1){
        return 0;
    }
    else{
        double a=pow(2, n2 - 1), b;
        
        if (n2%2 != 1){
             b = 3*n2/2;
            double result2 = a/b + seq(n2 + 1, n);
            return result2;
            b = n2;
            double result= b/a + seq(n2 + 1, n);
            return result;
        }
        else{
          b = n2;
            double result= b/a + seq(n2 + 1, n);
            return result;
        }
    }
}

int main (){
    int n;
    scanf("%d", &n);
    printf("S: %.2lf\n", seq(1,n));
}
