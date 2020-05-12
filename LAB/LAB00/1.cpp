#include<stdio.h>
int main(){
	int a;
	long b;
	float c;
	double d;
	char e;
	printf("Input(int):");
	scanf("%d",&a);
	printf("Input(long):");
	scanf("%ld",&b);
	printf("Input(float):");
	scanf("%f",&c);
	printf("Input(double):");
	scanf("%lf",&d);
	printf("Input(char):");
	scanf(" %c",&e);
	printf("Output(int):%d\n",a);
	printf("Output(long):%ld\n",b);
	printf("Output(float):%f\n",c);
	printf("Output(double):%lf\n",d);
	printf("Output(char):%c",e);
	return 0;
}
