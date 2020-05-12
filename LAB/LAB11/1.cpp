#include<stdio.h>
#include<stdlib.h>
#include<ctime>
void rfill1D(int x[],int k){
	srand(time(NULL));
	int temp;
	for(int i=0;i<k;i++){
		x[i]=i;
	}
	for(int i=1;i<=100;i++){
		int x1=rand()%k;
		int x2=rand()%k;
		temp=x[x1];
		x[x1]=x[x2];
		x[x2]=temp;
	}
}
void print1DArray(int x[],int k){
	for(int i=0;i<k;i++){
		printf("%2d",x[i]);
	}
	printf("\n");
}
void sort(int x[],int k){
	int temp;
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(x[i]<x[j]){
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
}
void print2DArray(int y[][4],int s,int t){
	for(int i=0;i<s;i++){
		for(int j=0;j<t;j++){
			printf("%3d",y[i][j]);
		}
		printf("\n");
	}
}
void rfill2D(int y[][4],int s,int t){
	int temp=0;
	for(int i=0;i<s;i++){
		for(int j=0;j<t;j++){
			y[i][j]=j+temp;
		}
		temp+=(s-1);
	}
	for(int i=1;i<=100;i++){
		int x1=rand()%s;
		int x2=rand()%s;
		int y1=rand()%t;
		int y2=rand()%t;
		temp=y[x1][y1];
		y[x1][y1]=y[x2][y2];
		y[x2][y2]=temp;
	}
}
int main() {
	int y[5][4]={0};
	int k=10;
	int x[k]={0};
	printf("\nrfill1D:\n");
	rfill1D(x,k);
	print1DArray(x,k);
	
	printf("\nAfter sorting:\n");
	sort(x,k);
	print1DArray(x,k);
	printf("\n");
	printf("\nrfill2D:\n");
	rfill2D(y,5,4);
	print2DArray(y,5,4);
	return 0;
}

