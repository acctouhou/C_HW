#include<stdio.h>
int main(){
	int data[10],temp;
	printf("input:");
	for(int i=1;i<=3;i++){
		scanf("%d",&data[i]);
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3-i;j++){
			if(data[j]>data[j+1]){
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
	for(int i=1;i<=3;i++){
		printf("%d ",data[i]);
	}
	return 0;
}
