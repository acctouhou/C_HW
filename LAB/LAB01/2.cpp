#include<stdio.h>
int main(){
	int v1,v2,v3;
	printf("Input:");
	scanf("%d",&v1);
	scanf("%d",&v2);
	v3=v1*v1*v1*v2;
	scanf("%d",&v2);
	v3=v3+v1*v1*v2;
	scanf("%d",&v2);
	v3=v3+v1*v2;
	scanf("%d",&v2);
	v3=v3+v2;
	printf("output:%d",v3);
	return 0;
}
