#include<math.h>
#include<stdio.h>
int main(){
	float x,ans;
	printf("input value:");
	scanf("%f",&x);
	ans=pow(x,3)+5*pow(x,2)+10*x+15;
	printf("output: %f",ans);
	return 0;
}
