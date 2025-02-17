#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int MDC(int x, int y) {
    if (y == 0){
        return x;
    }
    return MDC(y, x % y);
}

int main(){
int n,a,b;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    printf("MDC(%d,%d) = %d\n",a,b,MDC(a,b)); 
}
    return 0;
}
