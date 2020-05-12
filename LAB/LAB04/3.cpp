#include<stdio.h>
int main(){
	int tt,n,temp=1,w,x=0;
	printf("n=");
	scanf("%d",&n);
	w=n;
	tt=n*2-1;
	for(int j=1;j<=2*n;j++){
		for(int i=1;i<=w+n;i++){
			printf(" ");
		}
		temp>=2*n?temp=1:x=1;
		for(int i=1;i<=temp;i++){
			printf("*");
		}
		w<=0?x=3:0;
		while(x==3){
			for(int i=1;i<=tt;i++){
				printf(" ");
			}
			break;
		}
		while(x==3){
			for(int i=1;i<=temp;i++){
			printf("*");
			}
			break;
		}
			while(x==3){
			tt-=2;
			break;
		}
		temp+=2;
		printf("\n");
		w--;
	}
	
	
	return 0;
}
