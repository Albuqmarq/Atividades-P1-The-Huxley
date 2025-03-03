#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main (){
    int princ,eleit;
    scanf("%d %d",&princ, &eleit);
    int a[eleit][princ];
    int i,j;

    for(i=0;i<eleit;++i){
      for(j=0;j<princ;++j){
            scanf("%d", &a[i][j]);
     }
    }
    
    for(i=0;i<princ;++i){
      int soma=0;
     for(j=0;j<eleit;++j){
       soma+=a[j][i];
       }
      printf("Princesa %d: %d voto(s)\n",i+1,soma);
   }

 return 0;
}
