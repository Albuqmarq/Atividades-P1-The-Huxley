#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main (){
    int n;
    scanf("%d", &n);
    int a[n][n];
    int b[n][n];
    int c[n][n];
    int i,j;
    if(n==0){
        printf("Vazia");
    }
    else{
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\n", c[i][j]);
            }
        }
    }    
     return 0;
    }
