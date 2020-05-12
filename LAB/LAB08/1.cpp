#include<stdio.h>
int gcd(int a,int b){
	int d = a;
    if (d == 0) d = b;
    while (!(a%d==0 && b%d==0)) d--;
    return d;
}
int main(){
	int a;
	int b;
	scanf("%d",&a);
	while(scanf("%d",&b)){
		a=gcd(a,b);
	}
	printf("%d",a);
	return 0;
}
