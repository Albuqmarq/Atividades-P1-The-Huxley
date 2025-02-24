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

void print(int a[], int i, int tam)
{
    if (i < tam) return;

    printf("%d ",a[i]);

    print(a, i-1, tam);
}
int main(){

int n;
scanf("%d", &n);
int a[n];
 ler(a, 0, n);
 print(a,n-1,0);

    return 0;
}
