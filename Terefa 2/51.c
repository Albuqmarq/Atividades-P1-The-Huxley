#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
int codigo, quantidade;
double preco, total;

scanf("%d%d", &codigo, &quantidade);
if (codigo == 1){
    preco = 5.3;
}
else if (codigo == 2){
    preco = 6;
}
else if (codigo == 3){
    preco = 3.2;
}
else {
    preco = 2.5;
}
total = quantidade * preco;
 if (quantidade >= 15 || total >= 40){
     total = total * 0.85;
 }
 printf("R$ %.2lf\n", total);



    return 0;
}
