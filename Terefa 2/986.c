#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
int x,y,z;
scanf("%d %d %d", &x, &y, &z);
if(x==0 && y==0 && z==0){
    printf("N\n");
}
else if(x==y || y==z || x==z){
    printf("S\n");
}
else{
    if(x==y+z || y==x+z || z==x+y){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
}
    return 0;
}
