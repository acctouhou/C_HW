#include<stdio.h>
int test(int a,int b){
	printf("%d : %d\n",b,a/b);
	return a-(a/b)*b;
}
int main(){
	int n;
	scanf("%d",&n);
	test(test(test(n,50),20),10);
	return 0;
	
}
