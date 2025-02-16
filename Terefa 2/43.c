#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
 
int A,B,C;
scanf("%d %d %d", &A, &B, &C);

if (A == B && A == C){
   printf("1\n");
}
else if (A != B && A != C && B != C){
   printf("2\n");
}
else if (A == B && A != C){
   printf("3\n");
}
else if (B == C && B !=A){
   printf("3\n");
}
else if (C ==A && C != B){
   printf("3\n");
}

    return 0;
}
