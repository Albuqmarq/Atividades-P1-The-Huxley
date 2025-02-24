#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler(int b[], int i, int tam)
{
    if (i == tam){
        return;
    }
    else{
        scanf("%d", &b[i]);

        return ler(b, i + 1, tam);
    }
}

void rep(int b[], int i)
{
    if (b[i] == -1){
        return;
    }
    else{
        int box=b[i];
        b[i]=-1;

        return rep(b, box);
    }
}

void toc(int b[], int i, int n, int toca){

    if (i == n){

        printf("%d\n", toca);
        
        return;
    }
    else{

        if (b[i]!=-1){

            rep(b, i);

            return toc(b,i+1,n,toca+=1);
        }
        
        return toc(b, i + 1, n, toca);
    }
}


int main ()
{
    int a;
    scanf("%d", &a);

    int buraco[a];
    ler(buraco, 0, a);
    toc(buraco, 0, a, 0);

    return 0;
}
