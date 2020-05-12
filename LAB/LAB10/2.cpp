#include<stdio.h>
int a=0;
int b;
bool isHamming(int n){
	if(n==1)
		return 1;
	else if (n%2==0)
		return isHamming(n/2);
	else if (n%3==0)
		return isHamming(n/3);
	else if (n%5==0)
		return isHamming(n/5);
	else
		return 0;
}
int Hamming(int n){
	while(a<b){
		a+=isHamming(n);
		n++;
	}
	return n-1;
	
	
}

int main(){
	int n;
	
	scanf("%d",&b);
	while(b!=0){
		printf("%d",Hamming(1));
		scanf("%d",&b);
		a=0;
	}
	return 0;
}
