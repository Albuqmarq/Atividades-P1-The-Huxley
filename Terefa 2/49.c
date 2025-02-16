#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
double lado1, lado2, lado3;

scanf("%lf %lf %lf", &lado1, &lado2, &lado3);

if (lado1 == lado2 && lado1 == lado3){
    printf("equilatero\n");
}
else if (lado1 == lado2 && lado1 != lado3){
    printf("isosceles\n");
}
else if (lado2 == lado3 && lado2 != lado1){
    printf("isosceles\n");
}
else if (lado3 == lado1 && lado3 != lado2){
    printf("isosceles\n");
}
else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
    printf("escaleno\n");
}


    return 0;
}
