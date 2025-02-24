#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int resposta(char resp[], char gab[], int i, int tam, double ponto){
    if (i == tam){
        return ponto;
    }
    else{
        if (resp[i] == gab[i]){
            ponto += 1;
        }
        
         resposta(gab, resp, i + 1, tam, ponto);
        
    }
}
void ler(char gab[], int i, int tam){
    if (i == tam){
        return;
    }
    else{
        scanf(" %c ", &gab[i]);

        ler(gab, i + 1, tam);
    }
}


int prova(char gab[], double notas[], int a, int Total, double passou){
    int Nprv;
    scanf("%d", &Nprv);

    if (Nprv ==9999){
        double valor= (passou/Total)*100;
        printf("%.1lf%%\n", valor);
        
        return Total;
    }
    else{
        char resp[10];
        scanf(" ");
        ler(resp, 0, 10);

        notas[a]=resposta(gab, resp, 0, 10, 0);

        printf("%d %.1lf\n", Nprv, notas[a]);

        if (notas[a] >= 6){

            passou+=1;
           
        }
        
            prova(gab, notas, a+1, Total+1, passou);
        
    }
}
int freq(double notas[], int i, int n, int tam){
    if (n == tam){
        return 1;
    }
    else{
        if (notas[i] == notas[n]){
            
           return 1+freq(notas, i, n + 1, tam);
        }
        else{
           return  freq(notas, i, n + 1, tam);
        }
    }
}

void rep(double nota[], int i, int tam, double m, double result){
    if (i==tam){
        printf("%.1lf\n",result);

        return;
    }
    else{
        int frequencia=freq(nota, i, i + 1, tam);
        if (frequencia> m){
            
            rep(nota, i+1, tam, frequencia, nota[i]);
        }
        else{
           rep(nota, i+1, tam, m, result); 
        }
    }
}

  
int main(){
    char gab[10];

    ler(gab, 0, 10);

    double notas[9999];
    int x=prova(gab, notas, 0, 0, 0);
    rep(notas, 0, x, 0, 9998);

    return 0;
}
