#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
 
int livros, alunos;

scanf("%d %d", &livros, &alunos);

if (alunos/livros <= 8){
    printf("A\n");
}
if (alunos/livros >=9 && alunos/livros <=12){
    printf("B\n");
}
if (alunos/livros >= 13 && alunos/livros <=18){
    printf("C\n");
}
if (alunos/livros > 18){
    printf("D\n");
}

    return 0;
}
