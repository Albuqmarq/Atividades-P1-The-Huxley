#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int casos(int p, int cap){
    if(p==0){
        int xicaras=(cap*2)/7;
        printf("%d\n%d\n",cap,xicaras);
    }else{
        char t;
        int num;
        scanf("%d %c ", &num, &t);

        if(t=='p' || t=='P'){
            return casos(p-1,cap=cap +(num*10));
        }
        else if(t=='g' || t=='G'){
            return casos(p-1,cap=cap+(num*16));
        }
    }


}

int main(){
    casos(7,0);



    return 0;
}
