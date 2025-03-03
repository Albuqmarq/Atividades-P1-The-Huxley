#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

int n,m;
scanf("%d%d", &n,&m);

int lab[n][m],i,j;
int andou;


for(i=0;i<n;i++){
    for(j=0;j<m;++j){
        scanf("%d", &lab[i][j]);

    }
}

scanf("%d",&andou);

char direcao[andou];

for(i=0;i<andou;i++){
    scanf(" %c", &direcao[i]);  
}

int p1,p2;
scanf("%d %d", &p1,&p2);

for(i=0;i<andou;++i){

if(direcao[i]=='D'){
    if(lab[p1][p2+1]==1 && p2+1<m){
        p2=p2+1;
    }
}
else if(direcao[i]=='C'){
    if(lab[p1-1][p2]==1 && p1-1>=0){
        p1=p1-1;
    }

 }
else if(direcao[i]=='B'){
    if(lab[p1+1][p2]==1 && p1+1<n){
        p1=p1+1;
    }
 }
else if(direcao[i]=='E'){
    if(lab[p1][p2-1]==1 && p2-1>=0)
    p2=p2-1;
}

}
printf("(%d,%d)",p1,p2);

    return 0;
}
