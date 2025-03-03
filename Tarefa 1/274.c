#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double notaA, notaB, notaC, media;
    scanf("%lf %lf %lf", &notaA, &notaB, &notaC);
    media = (notaA*2 + notaB*3 + notaC*5)/10;
    printf("MEDIA = %.1lf\n", media);
    
	return 0;
}
