#include<stdio.h>
int gcd(int a){
	int prime=1;
	for(int i=2;i*i<=a;i++){
		if (a%i==0){
			prime =0;
		}
	}
	return prime;
}
int main(){
	int x,prime_1=1,prime_2=0,twin;
	scanf("%d",&x);
	for(int i=5;i<=x;i++){
		if(gcd(i)==1){
			if (gcd(i+2)==1)
				twin=i;
		}
	}
	printf("%d",twin);
	return 0;
}
