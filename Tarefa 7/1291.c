#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define COL 3
#define LIN 3
int main (){
    int a[LIN][COL];
    
    int i,j;

    for(i=0;i<LIN;++i){
        for(j=0;j<COL;++j){
            scanf("%d", &a[i][j]);
        }
    }
    double soma=0;
    int maior=-99;
    int diag=0;
    int delta;
    
    for(i=0;i<LIN;++i){
        for(j=0;j<COL;++j){
        
        soma=soma+a[i][j];
       
        if(a[i][j]>=maior){
            maior=a[i][j];
        }

        if(i==j){
            diag+=a[i][j];
        }

        }
    }
    if(maior>0){
            delta=1;
        }
        else if(maior==0){
               delta=0;
        }
        else if(maior<0){
            delta=-1;
        }

    printf("%.2lf ", soma/9);
    printf("%d %d %d", maior,delta,diag);

     

 return 0;
}
