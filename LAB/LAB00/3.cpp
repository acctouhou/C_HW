#include<stdio.h>
using namespace std;
int main(){
	float a,b,ans,i;
	char c,fu;
	for (i=0;i<4;i++){
	printf("\nInput:");
	scanf("%f %c%f",&a,&c,&b);
	if (c==43)
	{
		ans=a+b;
	}
	else if (c==45)
	{
		ans=a-b;
	}
	else if (c==42)
	{
		ans=a*b;
	}
	else if (c==47)
	{
		ans=a/b;
	}
	printf("Output:%f",ans);
}
	return 0;
}
