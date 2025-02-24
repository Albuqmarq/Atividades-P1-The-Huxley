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
void vf(int a[],int i, int tam,int somaJ,int somaM){
    if(i==tam){
        if(somaJ>somaM){
            printf("%d",somaJ);
        }
        else{
            printf("%d", somaM);
        }
        return;
    }
    else{
        if(a[i]%2==0){
            return vf(a,i+1,tam,somaJ+a[i],somaM);
        }
        else{
            return vf(a,i+1,tam,somaJ,somaM+a[i]);
        }
       
    }
}

int comp(int a[], int a2[], int n, int n2)
{
    if (n < 0){
        return 0;
    }
     else{
        if (n2<0){
            comp (a,a2,n-1,n-2);
        }
        else{
            if (a[n] == a2[n2]){
                a2[n2]=0;
            }

            comp(a,a2,n,n2-1);
        }
    }
}
void figu(int a[],int i,int tam,int pj,int pm){
    if(i==tam){
    printf("%d\n%d\n", pj,pm);
    return;
    }
    if(a[i]%2==0){
        return figu(a,i+1,tam,pj+1,pm);
    }
    else{
       
        return figu(a,i+1,tam,pj,pm+1);
    }

    
}

int main(){

int n;
scanf("%d", &n);
int a[n];
 ler(a, 0, n);
 figu(a,0,n,0,0);
 comp(a,a,n-1,n-2);
 vf(a,0,n,0,0);

    return 0;
}
