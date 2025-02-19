#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void sequencia(int semana,int p,int l,int dia,int mp,int ml){
    if(semana == 7){
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", p);

		printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", l);

        if(dia == 0){
			printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
			}
        else if(dia == 1){
			printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");}
        else if(dia == 2){printf("DIA QUE MAIS PRODUZIU: TERCA\n");
		}
        else if(dia == 3){
			printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
			}
        else if(dia == 4){
			printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
			}
        else if(dia == 5){
			printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
			}
        else if(dia == 6){
			printf("DIA QUE MAIS PRODUZIU: SABADO\n");
			}
        return 0;
    }
	else{

        int lin,prog;
        scanf("%d %d",&prog, &lin);

        if(prog>= 5){
            p++;
        }
        if(lin>= 100){
            l++;
        }
        if(lin>= ml && prog>= mp){
            ml = lin;
			mp = prog;
            dia = semana;
        }
        sequencia(semana+1,p,l,dia,mp,ml);
    }
}
int main() {
    sequencia(0,0,0,0,0,0);
	return 0;
}
