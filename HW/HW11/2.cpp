#include<stdio.h>
#define m 3
#define n 4
int temp[m][m];
void mux(int a[m][n],int b[n][m]){
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<n;k++){
				sum+=a[i][k]*b[k][j];
			}
			temp[i][j]=sum;
			sum=0;
		}
	}
	
}
int main(){
	for(int i=1;i<m;i++){
		for(int j=1;j<m;j++){
			temp[i][j]=0;
		}
	}
	int a[m][n]={{2,1,3,4},
	{1,2,1,1},
	{3,1,1,3}};
	int b[n][m]={{1,3,2},
	{2,1,1},
	{1,4,2},
	{1,2,1}};
	mux(a,b);
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("%2d ",temp[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
