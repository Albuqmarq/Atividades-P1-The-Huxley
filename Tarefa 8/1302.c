#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define COL 3
#define LIN 3

int main (){

int a[LIN][COL];
int i,j;
int menor=10000,delta,diag=0,divi=0;
double cont=0;

for(i=0;i<LIN;++i){
    for(j=0;j<COL;++j){
        scanf("%d", &a[i][j]);

        if(a[i][j]>0){
            cont+=a[i][j];
            ++divi;
        }
        else{
            
        }
        if(a[i][j]<menor){
            menor=a[i][j];
        }
        if(i!=j){
            diag+=a[i][j];
        }
    }
}
if(menor%2==0){
    delta=1;
}
else{
    delta=0;
}
if(cont==0){
    printf("%.2lf ", cont);
}
else{
    printf("%.2lf ", cont/divi);
}
printf("%d %d %d",  menor, delta, diag);
 return 0;
}
