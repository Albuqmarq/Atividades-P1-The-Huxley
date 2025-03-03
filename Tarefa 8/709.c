#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
     int tcasa;
     int players; 
     int rounds;
    scanf("%d %d %d", &tcasa, &players, &rounds);
    int i,j;
    int c[tcasa];
    for (i=0;i<tcasa;i++) {
        scanf("%d", &c[i]);
    }
    
    int local[players];
    
    for (i=0;i<players;i++) {
        local[i] = 0;
    }
    int vc;
    int np;
    
    for (j=0;j<rounds;j++) {
        for (i=0;i<players;i++) {

            int valor;
            scanf("%d", &valor);

            np = (local[i] + valor) % tcasa;

            vc = c[np];

            if (vc < 0) {
              np = (np+tcasa+vc)%tcasa;
              
            } else if (vc >0) {
                np = (np + vc) %tcasa;
            }
          
               local[i] = np;
            
           
        }
    }
    
   for ( i=0;i<players;i++) {
        printf("%d\n", local[i]);
    }
   
    

    return 0;
}
