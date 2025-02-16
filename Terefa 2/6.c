#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
double A,B,C,x,X,D;
scanf("%lf %lf %lf", &A, &B, &C);
D = (B*B) - 4 *A * C;
x= (-B + sqrt(D))/(2*A);
X= (-B - sqrt(D))/(2*A);
if (A==0){
    printf("NEESG\n");
}
else if( D<0){
    printf("NRR\n");
}
else {
    printf("%.2lf\n%.2lf", x,X);
}
    return 0;
}
