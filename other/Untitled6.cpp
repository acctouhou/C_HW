#include<stdio.h>
int main(){
	int x_1,x_2,x_3,temp;
	while(scanf("%d",&temp)){
		if(temp>=x_1){
			x_3=x_2;
			x_2=x_1;
			x_1=temp;
		}
		else if(temp>=x_2){
			x_3=x_2;
			x_2=temp;
		}
		else if(temp>=x_3)
			x_3=temp;
	}
	printf("%d %d %d",x_1,x_2,x_3);
	return 0;
}
