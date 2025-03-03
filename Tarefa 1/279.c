#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int numero, horas;
  double ValorHora, ValorTotal;
  scanf("%d %d %lf", &numero, &horas, &ValorHora);
  ValorTotal = ValorHora * horas;
  printf("NUMBER = %d\nSALARY = R$ %.2lf", numero, ValorTotal);
    
    
	return 0;
}
