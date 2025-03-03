#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main (){

double a[101][2];
int i,j=0;

double cred=0,deb=0;



for(i=0;i<101;++i){
    

        scanf("%lf", &a[i][0]);
        if(a[i][0]==-1){
            break;
        }
        scanf("%lf", &a[i][1]);
        
            if(a[i][j]==1){
                cred+=a[i][j+1];
            }
            else if(a[i][j]==0){
                deb+=a[i][j+1];
            }
         
}

printf("Creditos: R$ %.2lf\nDebitos: R$ %.2lf\nSaldo: R$ %.2lf",cred,deb, cred-deb);

 return 0;
}
