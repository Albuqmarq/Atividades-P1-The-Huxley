#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d", &a);
    int n,m,k,sortudo=0;
    int quero_dormir[6], estou_cansado[a][10];
    int deu_sorte;
    

    for(n = 0; n < a; n++)
     {
        char virgula[1000];
        scanf("%s",virgula);

        char *t= strtok(virgula, ",");
        m=0;
        while(t!=NULL)
         {
            estou_cansado[n][m] = atoi(t);
            t=strtok(NULL, ",");
            m++;
            
        }
    }
    for (n=0;n<6;n++) 
    {
        scanf("%d", &quero_dormir[n]);
    }
    for(n=0;n<a;++n)
     {
       deu_sorte = 0;
        for(m=0 ;m<6;++m)
        {
            for(k=0;k<10;++k) 
            {
                if(estou_cansado[n][k] == quero_dormir[m])
                 {
                    deu_sorte=deu_sorte+1;
                    break;
                }
            }
        }
        if(deu_sorte==6)
         {
            sortudo=sortudo+1;;
        }
    }
    printf("Total de ganhadores: %d\n", sortudo);

    return 0;
}
