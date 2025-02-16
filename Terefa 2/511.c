#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
int homem, idade;
scanf("%d %d", &homem, &idade);
if (homem ==1 && idade == 1){
    printf("0\n");
}
if (homem == 1 && idade == 0){
    printf("0\n");
}
if (homem ==0 && idade == 1){
    printf("1\n");
}
if (homem ==0 && idade == 0){
    printf("0\n");
}

    return 0;
}
