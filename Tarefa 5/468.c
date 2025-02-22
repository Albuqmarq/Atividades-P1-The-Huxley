#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void loop(int produtos,int cont){
    if(produtos==0){
        printf("%d", cont);
        return;

    }
    double a,b;
    scanf("%lf %lf", &a,&b);
    if(b<=a*0.8){
        return loop(produtos-1,cont+1);
    }
    else{
    return loop(produtos-1,cont);
    }

}
int main(){
loop(5,0);
    return 0;
}
