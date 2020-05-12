#include<stdio.h>
long long int d2o(long long int a){
	if(a==0)
		return 0;
	else
		return 10*d2o(a/8)+a%8;
}
long long int o2d(long long int a){
	if(a==0)
		return 0;
	else
		return 8*o2d(a/10)+a%10;
}
int main(){
	long long int a;
	scanf("%lld",&a);
	while(a!=0){
		printf("%lld",d2o(a));
		scanf("%lld",&a);
	}
	scanf("%lld",&a);
	while(a!=0){
		printf("%lld",o2d(a));
		scanf("%lld",&a);
	}
	
	
	
	
	return 0;
}
