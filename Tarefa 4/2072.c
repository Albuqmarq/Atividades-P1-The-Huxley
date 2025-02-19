#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void viagem(int days, int Cd, int d, int c, int m, int l){
	
	if (days == Cd){
		
		printf("%d\n", m);
		return 0;

	}else{
		if (d<c)	l = 1;

		else if (d>c){
		
			l = 2;
		}

		char sentido;
		scanf(" %c", &sentido);
		
		if(d==c) {
			if (l == 1){
			
			    if (sentido == 'D') m=m+1;
			}
			else if (l == 2){
			
				if (sentido == 'C') m=m+1;
            }
		} 
		
		if (sentido =='D') d=d+1;
			
		else if(sentido == 'C'){
		
			c=c+1;
		}
		viagem(days, Cd + 1, d, c, m, l);
	}
}	

int main(){
    
    int Cd = 0;       
	int totald;
	scanf("%d ", &totald);
	
    if (totald == 1){
    char sent;
        scanf(" %c",&sent);
       
        printf("0\n");
       
        return 0;
    }
    else {
		viagem(totald,Cd, 0, 0, 0, 0);
	}
	
	return 0;
}
