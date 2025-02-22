#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler(double a[], int i, int tam)
{
    if (i == tam) return;

    scanf("%lf", &a[i]);

    ler(a, i+1, tam);
}
void loop1(double a[], int i, int tam){
    if (i==tam-1){

        return;
    }
    if(a[i]>a[i+1]){
        double box =a[i];
        a[i]=a[i+1];
        a[i+1]= box;
       
    }
    loop1(a,i+1,tam);

}
void loop2(double a[], int tam){
    if(tam ==1){
        return;
    }
    loop1(a,0,4);
    loop2(a,tam-1);
}
int main(){

 double a[4];
 ler(a, 0, 4);
 loop2(a,4);
 printf("%.2lf\n", a[0]);
 printf("%.2lf\n", a[2]);
 printf("%.2lf\n", a[3]);
 printf("%.2lf\n", a[1]);

    return 0;
}
