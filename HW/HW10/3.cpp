#include<stdio.h>
int test(int n){
	if(n<2)
		return 1;
	if (n<3)
		return (test(n-1)+test(n-2));
	else if (n>=3)
		return (test(n-1)+test(n-2)+test(n-3));
}


int main(){
	int n;
	scanf("%d",&n);
	printf("%d",test(n));
	return 0;
}
