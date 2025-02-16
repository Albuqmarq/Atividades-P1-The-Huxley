#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
float Vmaxima, Vcarro, vm1, vm2;
scanf("%f %f", &Vmaxima, &Vcarro);
vm1=Vmaxima*1.2;
vm2=Vmaxima*1.5;

if (Vcarro < Vmaxima){
    printf("0.00\n0\n");
}
else if(Vcarro >= Vmaxima && Vcarro<= vm1){
    printf("85.13\n4\n");
}
else if(Vcarro > vm1 && Vcarro<=vm2){
    printf("127.69\n5\n");
}
else if(Vcarro > vm2){
    printf("574.62\n7\n");
}


    return 0;
}
