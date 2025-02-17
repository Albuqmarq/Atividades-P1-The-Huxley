#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int numero(int i, int seg, int c) {
	int r =i;

	if (seg==0){
	return r;
    }
	if((c % 2) == 0){
         r =r + 3;
    }
	else{

     r = r + r % 5;
    }	
	c= c +1;

	
	if(c < seg) {
        numero(r, seg, c);
    }
	else{

     return r;
    }
}

int main() {
	int N, T;

	scanf("%d %d", &N, &T);

	printf("%d\n", numero(N, T, 0));

	return 0;
}
