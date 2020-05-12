#include<stdio.h>
#include<math.h>
int f(int n,int k){
	int temp=1;
	for(int i=1;i<=k;i++){
		temp*=(n-i+1);
		temp/=i;
	} 
	return temp;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int t=1;t<=n-i;t++)
			printf("  ");
		for(int k=1;k<=i;k++)
			printf("%4d",f(i-1,k-1));
		printf("\n");
	}
	return 0;
}
