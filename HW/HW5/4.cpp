#include<stdio.h>
int two_to_ten(int a){
	int temp=0,n=1;
	while(a>0){
		temp+=a%10*n;
		n*=2;
		a/=10;
	}
	return temp;
}
int main(){
	int input;
	printf("input:");
	scanf("%d",&input);
	printf("%d",two_to_ten(input));
	
	return 0;
}
