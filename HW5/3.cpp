#include<stdio.h>
#include<math.h>
int get_n(long long int a){
	int i=0;
	while(a>=10){
		a/=10;
		i++;
	}
	return i;
}
void test(long long int a){
	long long int temp,i,n=get_n(a);
	while(a>=1){
		i=1;
		temp=a;
		while(temp>=10){
			temp/=10;
			i*=10;
		}
		printf("%lld ",temp);
		a-=temp*i;
		n--;
	} 
	while(n!=-1){
		printf("%d ",0);
		n--;
	}
}
int main(){
	long long int input;
	printf("input:");
	scanf("%lld",&input);
	test(input);
	return 0;
}
