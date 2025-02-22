#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
double cot,aliq,vp,frete;
scanf("%lf %lf %lf %lf", &cot,&aliq,&vp,&frete);
double vt,imp,vf,icms,impt;


if (vp<2500){
	vt=(vp*cot)+(frete*cot);
	imp=vt*0.6;
	vf=(vt+imp)/(1-(aliq/100));
	icms=vf*(aliq/100);
	impt=icms+imp;
printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", cot, vp*cot, frete*cot, vt);
printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", imp, icms, impt, vf);
printf("Impostos calculados com o frete\n");
}
else{
	vt=(vp*cot);
	imp=vt*0.6;
	vf=(vt+imp)/(1-(aliq/100));
	icms=vf*(aliq/100);
	impt=icms+imp;
printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", cot, vp*cot, frete*cot, vt+frete*cot);
printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", imp, icms, impt, vf+frete*cot);
printf("Impostos calculados sem o frete\n");
}

 
	return 0;
}
