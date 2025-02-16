#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
double tarefas, respondidas, porcentagem;
scanf("%lf %lf", &tarefas, &respondidas);


porcentagem = (respondidas/tarefas)*100;

if (porcentagem >= 0 && porcentagem < 20){
    printf("%.2lf%% 4.40%% Pessimo\n", porcentagem);
} 
else if (porcentagem >= 20 && porcentagem < 40){
    printf("%.2lf%% 31.65%% Ruim\n", porcentagem);
}
else if (porcentagem >= 40 && porcentagem < 60){
    printf("%.2lf%% 56.82%% Bom\n", porcentagem);
}
else if (porcentagem >= 60 && porcentagem < 80){
    printf("%.2lf%% 80.00%% Muito Bom\n", porcentagem);
}
else if (porcentagem >= 80 && porcentagem <=100){
    printf("%.2lf%% 94.00%% Excelente\n", porcentagem);
}

    return 0;
}
