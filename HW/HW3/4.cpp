#include<stdio.h>
#include<math.h>
int main(){
	double v,f0=2e10,f1=2.0000004e10,a;
	a=6.685e8;
	v=a*(f1-f0)/(f1+f0);
	printf("speed: %lf miles/hour \n",v);
	v=55;
	f1=(1+55/a)*f0/(1-55/a);
	printf("frequency: %lf hz \n",f1);
	return 0;
}
