#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void ler(int a[], int i, int tam)
{
    if (i == tam) return;

    scanf("%d", &a[i]);

    ler(a, i+1, tam);
}

void print(int a[], int i, int tam, int cont)
{
    if (i == tam){
    printf("%d", cont-1);
    return;
    }
    if(a[i]==a[10]){

    print(a,i+1,tam,cont+1);
    }
    else {
    print(a, i+1, tam, cont);
    }
}
int main(){


int a[11];
 ler(a, 0, 11);
 print(a,0,11,0);

    return 0;
}
