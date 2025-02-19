#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prim (int n, int divi){
   if (divi == 1){return 1;}
    else{
		if (n%divi == 0){return 0;}
        else{ return prim (n, divi - 1);}
    } 
}

int Pprim (int m){

    if ( prim (m, m-1)){return m;}
    else { return Pprim (m + 1);}
}

int fatorial (int f){
    if (f <= 1){return 1; }
    else{return f*fatorial(f - 1);}
}

double ScF (int termo, int n){
    if (termo == 1){
        printf("1!/1");

        return 1 + ScF (termo + 1, n);
    }
    else if (termo > 1 && termo <= n){
        int  y;
        double i;

        if (prim(termo, termo - 1) == 1){y = termo;}
        else if (prim(termo, termo - 1) == 0){ y = Pprim (termo);}

        i = fatorial (termo);

        printf(" + %d!/%d", termo, y);

        double z = i/y;
      
        return z + ScF (termo + 1, n);
    }
    if (termo > n){   
        printf("\n");

        return 0;
    }
}

int main (){
    int C;
    double D;

    scanf("%d", &C);
    
    if (C == 0){
        printf("0.00\n");
    }
    else{
        D = ScF (1, C);

        printf("%.2lf\n", D);
    }

    return 0;
}
