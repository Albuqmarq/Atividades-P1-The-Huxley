#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
double litro,valorA,valorG,valorD;
char combustivel;

scanf("%lf %c", &litro, &combustivel);
valorA=litro*1.90;
valorG=litro*2.50;
valorD=litro*1.66;
if (combustivel == 'A'){
    if(litro<=20){
        printf("R$ %.2lf\n",valorA*0.97);
    }
    else if(litro>20){
        printf("R$ %.2lf\n",valorA*0.95);
    }
}
else if(combustivel == 'G'){
    if(litro<=20){
        printf("R$ %.2lf\n",valorG*0.96);
    }
    else if(litro>20){
        printf("R$ %.2lf\n",valorG*0.94);
    }
}
else if(combustivel == 'D'){
    if(litro<=25){
        printf("R$ %.2lf\n",valorD);
    }
    else if(litro>25){
        printf("R$ %.2lf\n",valorD*0.96);
    }
}


    return 0;
}
