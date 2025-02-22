#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int conta(int n, int soma){
    if(n==1){
    return soma+1;
    }
    if(n%2==0){
        return conta(n/2,soma+1);
    }
    else{
        return conta(3*n+1,soma+1);
    }
}

int loop(int i,int j,int maior){
    if(i==j+1){
     return maior;
    }

    if(conta(i,0)>maior){
       return loop(i+1,j,maior=conta(i,0));
    }
    else{
        return loop(i+1,j,maior);
    }
}
void scan(){
    int i,j;
if(scanf("%d%d", &i,&j)!=EOF){
    
    printf("%d %d ", i,j);
    
    
    if(i<=j){
        printf("%d\n", loop(i,j,0));
    }
    else{
        printf("%d\n", loop(j,i,0));
    }
    scan();
}
else{
    return;
}
}

int main (){
    
scan();

    return 0;
}
