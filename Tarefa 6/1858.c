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
void loop1(int a[], int i, int tam){
    if (i==tam-1){

        return;
    }
    if(a[i]>a[i+1]){
        int box =a[i];
        a[i]=a[i+1];
        a[i+1]= box;
       
    }
    loop1(a,i+1,tam);

}
void loop2(int a[], int tam){
    if(tam ==1){
        return;
    }
    loop1(a,0,6);
    loop2(a,tam-1);
}
int main(){

 int a[6];
 ler(a, 0, 6);
 loop2(a,6);
 printf("%d\n", a[0]);
 printf("%d\n", a[5]);


    return 0;
}
