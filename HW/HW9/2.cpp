#include<stdio.h>

void sumavg(double n1,double n2,double n3,double *sump,double *avgp){
	*sump=n1+n2+n3;
	*avgp=*sump/3;
}

int main(){
	double sump,avgp;
	double n1,n2,n3;	
	scanf("%lf %lf %lf",&n1,&n2,&n3);
	sumavg(n1,n2,n3,&sump,&avgp);
	printf("%lf %lf",sump,avgp);	
	return 0;
}
