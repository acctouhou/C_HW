#include<stdio.h>
int temp(int n){
	if(n==2)
		return 2;
	else if (n==1)
		return 1;
	return temp(n-1)+temp(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",temp(n));
}
