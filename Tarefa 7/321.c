#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int a;
    scanf("%d", &a);

    double valor[a],comeu=0,gastou=0;
    char fru[1000001];
    int quilo[a];
    int i,j;

    for(i=0;i<a;++i){
        scanf("%lf", &valor[i]);
        scanf(" ");
        fgets(fru, 1000001, stdin);

        quilo[i]=1;

        for(j=0;fru[j]!='\0';++j){
            if(fru[j]==' '){
                quilo[i]++;
            }
        }
    }


    for(i=0;i<a;++i){
        printf("dia %d: %d kg\n",i+1,quilo[i]);

        gastou=gastou+valor[i];
        comeu=comeu+quilo[i];
        
    }

    printf("%.2lf kg por dia\nR$ %.2lf por dia\n", comeu/a, gastou/a);
   

    return 0;
}
