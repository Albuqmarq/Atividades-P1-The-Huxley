#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    double notaA, notaB, media;
    scanf("%lf %lf", &notaA, &notaB);
   
    media = (notaA*3.5 + notaB*7.5)/11;
    printf("MEDIA = %.5lf\n", media);
    
    
    
	return 0;
}
