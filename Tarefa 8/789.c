#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int loop(int sudoku[][9]) {
 int i,j,m;
    for (j = 0; j < 9; ++j) {
        int verifica[10] = {0};
        for ( i = 0; i < 9; ++i) {
            if ( verifica[sudoku[i][j]] > 0) {
                return 0;
            }
            verifica[sudoku[i][j]] = 1;
        }
    }

    for ( i = 0; i < 9; ++i) {
        int verifica[10] = {0};
        for ( j = 0; j < 9; ++j) {
            if ( verifica[sudoku[i][j]] > 0) {
                return 0;
            }
            verifica[sudoku[i][j]] = 1;
        }
    }
    for (m = 0; m < 9; ++m) {
        int verifica[10] = {0};
        for ( i = m/3*3;i< m/3*3+3;i++) {
            for ( j =(m%3)*3;j<(m % 3)*3+3; ++j) {
                if ( verifica[sudoku[i][j]] > 0) {
                    return 0;
                }
                verifica[sudoku[i][j]] = 1;
            }
        }
    }

    return 1;
}

int main() {
    int x,i,j;
   
    scanf("%d", &x);
    int ordem;
    for(ordem=0; ordem < x; ordem++) {
        int sudoku[9][9];
        for(i=0;i<9; i++){
            for(j=0;j<9;j++){
                
                scanf("%d", &sudoku[i][j]);
            }
        }

        printf("Instancia %d\n", ordem+1);

        if(loop(sudoku)==0){
            printf("NAO\n");
        } 
        else{
            printf("SIM\n");
        }
        printf("\n");
    }

    return 0;
}
