#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int level, p1,p2,p3,p4,p5;
    scanf("%d", &level);
    p1 = 20 + (level*level*level);
    p2= 8000 + (level-10)*(level-10);
    p3= 9000 + 5*level;
    p4= 9300 + 2*level;
    p5= 9500 + level;
    
    if(level >= 1 && level <= 20){
        printf("Potencia de : %d W ", p1);
    }
    if (level >= 21 && level <= 40){
        printf("Potencia de : %d W", p2);
    }
    if (level >= 41 && level <= 60){
        printf("Potencia de : %d W", p3);
    }
    if (level >= 61 && level <= 80){
        printf("Potencia de : %d W", p4);
    }
    if (level >= 81 && level <= 100){
        printf("Potencia de : %d W", p5);
    }
    
	return 0;
}
