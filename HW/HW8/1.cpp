#include<stdio.h>
int  IsPrime(int x){
	int prime=1;
	for(int i=2;i*i<=x;i++){
		x%i==0?prime=0:NULL;
	}
	if(prime==1)
		return 1;
	return 0;
}
int main(){
	int x;
	scanf("%d",&x);
	printf("%d",IsPrime(x));
	return 0;
}
