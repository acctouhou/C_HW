#include<stdio.h>
int check(int x){
	int prime=1;
	for(int i=3;i*i<=x;i++){
		(x%i)==0?prime=0:NULL;
	}
	if(prime==0)
		return 0;
	else 
		return 1;
}
void fuck(int x){
	int temp;
	for(int i=3;i<=x;i++){
		if (check(i)==1)
			if(check(i+2)==1){
				temp=i;
			}
	}
	printf("%d %d",temp,temp+2);
}
int main(){
	int x,temp;
	while(1){
		scanf("%d",&x);
		fuck(x);
	}
	return 0;
}
