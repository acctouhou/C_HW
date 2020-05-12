#include<stdio.h>
#include<stdlib.h>
#include<ctime>

int get(){
	return rand()%6+1;
}
int main(){
	srand(time(NULL));
	int *temp;
	temp= new int [6];
	for(int i=0;i<=5;i++){
		temp[i]=0;
	}
	for(int i=1;i<=100;i++){
		temp[get()-1]++;
	}
	for(int i=0;i<=5;i++){
		printf("%d.:",i+1);
		for(int j=0;j<=temp[i];j++){
			printf("*");
		}
		printf("\n");
	}
	delete [] temp;
	return 0;
} 
