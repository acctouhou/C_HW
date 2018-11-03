#include<stdio.h>
void order(int *a,int *b){
	int t;
	if(*a>*b){
		t=*a;
		*a=*b;
		*b=t;
	}
	
}

int main(){
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	order(&n1,&n2);
	printf("%d %d",n1,n2);
	return 0;
}
