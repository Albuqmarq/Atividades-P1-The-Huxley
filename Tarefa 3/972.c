#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primo(int num, int divi) {
   
    if (num<2){
        return 0;
    }
        
    if (divi == 1){
        return 1;
    }
    if (num % divi == 0){

        return 0;
    }    
    return primo(num, divi-1);
}

void reprimo() {
    int x;
    scanf("%d", &x);
    
    if (x == -1){
        return 0;
    }
    int valor = primo(x, x-1);
    printf("%d\n",valor);
    reprimo();
}

int main() {
    
    reprimo();
    
    return 0;
}
