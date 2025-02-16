#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 int main(){
int m3;
scanf("%d", &m3);
if (m3 >= 0 && m3 <=10){
   printf("7");
}
else if (m3>10 && m3<=30){
   printf("%d", 7+(m3-10)*1);
}
else if (m3>30 && m3<=100){
   printf("%d", 7+20+(m3-30)*2);
}
else if (m3>100 && m3<=1000){
   printf("%d", 7+20+140+(m3-100)*5);
}

    return 0;
}
