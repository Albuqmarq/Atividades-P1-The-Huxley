#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



     

int main (){
    int x,y;
    scanf("%d %d", &x, &y);
    int n;
    for (n=1; n<=y; ++n){
       if(n%x==0){
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
    }
     
 return 0;
}
  
  
  
