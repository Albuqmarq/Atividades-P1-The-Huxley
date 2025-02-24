#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(char word[], int i, int tam)
{
    if (i < tam){
   printf("\n");
	return;
    } 
    printf("%c", word[i] );
    print(word,i-1,tam);
}
int main(){

char word[255];
fgets(word, 255, stdin);

int p=strlen(word) - 1;

print(word, p,0);
 
 

    return 0;
}
