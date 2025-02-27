#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    char n1[10001];
    char n2[10001];
    int i, c=0, Resultado=0,maximo;
    scanf(" %s %s ", n1, n2);
   
    maximo =(strlen(n1) > strlen(n2)) ? strlen(n1) : strlen(n2);
    
    int invN1[maximo];
    int invN2[maximo];
    int final[maximo];
    
    for(i=0;i< maximo; i++) {
        invN1[i] = 0;
        invN2[i] = 0;
        final[i] = 0;
    }
    for(i=0;i<strlen(n1); ++i){
        invN1[strlen(n1)-i-1]=n1[i]-'0';
    }
    for(i=0;i< strlen(n2);++i) {
        invN2[strlen(n2)-i-1]=n2[i]-'0';
    }
    for(i=0;i<maximo;++i) {
        int soma=invN1[i]+invN2[i]+c;
        final[i] = soma % 10;
        c = soma / 10;
    }
    for(i=maximo-1;i>= 0;--i) {
        if (final[i] != 0 || Resultado) {
            printf("%d", final[i]);
            Resultado = 1;
        }
    } 
    if(!Resultado) {
        printf("0");
    }
    
    return 0;
}
