#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ContaDigitosPares(int x, int valor) {
    if (x == 0)
        return valor;
    else {
        if (x%2==0){

            valor=valor+1;
        }    
        int divi = x/10;
        return ContaDigitosPares (divi,valor);
    }
}

int main() {
    int cont = 0;
    int n, final;
    scanf("%d", &n);
    final = ContaDigitosPares(n, cont);
    printf("%d\n", final);

    return 0;
}
