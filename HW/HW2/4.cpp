#include<stdio.h>
const double PI=3.1415926535897;
int main(){
	float r=6.75,a,f;
	a=r*r*PI;
	f=2*PI*r;
	printf("%10.5f\n",2*r);
	printf("%10.5f\n",f);
	printf("%10.5f\n",a);
	return 0;
}
