#include<stdio.h>
float f(float x){
	return 8*x*x*x+x*x*3+6*x+10;
}
int main(){
	float a=0,b=10,h=0.1,sum_a=0,sum_b=0;
	//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
	while (a<=b-h){
		sum_a+=(f(a)+f(a+h))*h/2;
		a+=h;
	}
	printf("%f\n",sum_a);
	//bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
	a=0;
	while(a<=b-h){
		sum_b+=f(a)*h;
		a+=h;
	}
	printf("%f",sum_b);
	return 0;
} 
