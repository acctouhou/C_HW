#include<stdio.h>
int powmod(long long n,long long k,long long m){
	long long temp=n;
	long long sum=1;
	while(k>0){
		if(k%2){
			sum*=temp%m;
		}
		temp*=temp;
		temp%=m;
		sum%=m;
		k=k>>1;
	}
	return sum;
}

int main(){
	long long n,k,m;
	long long temp=1;
	while(scanf(" %d %d %d",&n,&k,&m)){
		printf("%d",powmod(n,k,m)%m);
	}
	
	return 0;
}
