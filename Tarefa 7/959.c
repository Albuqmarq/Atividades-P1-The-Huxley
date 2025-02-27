#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    int n=1,m=1;
    
      while(n<=y){
       if(m%x==0){
        printf("%d\n",n);
       }
       else{
        if(n==y){
            printf("%d", n);
        }
        else{
            printf("%d ",n);
        }
       }
        m++;
        n+=z;
      }
    
     
 return 0;
}
