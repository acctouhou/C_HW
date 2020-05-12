#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,e,f,x,y;
	printf("Input data:");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
	printf("x=%f y=%f a=%f b=%f c=%f d=%f e=%f f=%f",x,y,a,b,c,d,e,f);
	return 0;
}
