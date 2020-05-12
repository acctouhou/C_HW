#include<stdio.h>
int main(){
	long long x,n,sign=-1,i=1,sum=0,temp=0;
	printf("n=");
	scanf("%d",&n);
	printf("x=");
	scanf("%d",&x);
	temp=sign*x;
	while(i<=n){
		sum+=temp;
		temp*=-1*x;
		sign*=-1;
		i++;
	}
	printf("%lld",sum+1);
	return 0;
}
