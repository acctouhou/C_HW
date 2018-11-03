#include<stdio.h>
int temp[100]={72,23,38,86,62,29,99,96,67,78,87,76,65,58,86,69,93,34,45,55,
    52, 7,74,48,83,39,90,18,82,26,65,53,39,96,66,-1};
double ave(){
	int i=0;
	int sum=0;
	while(temp[i]!=-1){
		sum+=temp[i];
		i++;
	}
	return (double)sum/i;
}
void counter(int *a){
	int i=0,b;
	while(temp[i]!=-1){
		b=temp[i];
		switch (b){
			case 0 ... 9: a[0]++; break;
			case 10 ... 19: a[1]++; break;
			case 20 ... 29: a[2]++; break;
			case 30 ... 39: a[3]++; break;
			case 40 ... 49: a[4]++; break;
			case 50 ... 59: a[5]++; break;
			case 60 ... 69: a[6]++; break;
			case 70 ... 79: a[7]++; break;
			case 80 ... 89: a[8]++; break;
			case 90 ... 100: a[9]++; break;
		}
		i++;
	}
}
void counter_2(int *a){
	int i=0,b=ave();
	while(temp[i]!=-1){
		if(temp[i]>b)
			a[1]++;
		else
			a[0]++;
		i++;
	}
}
int main(){
	printf("MEAN =%lf\n",ave());
	int count[10]={0};
	int count_2[2]={0};
	counter_2(count_2);
	printf("ABOVE MEAN =%3d\n",count_2[1]);
	printf("BELOW MEAN =%3d\n",count_2[0]);
	counter(count);
	for(int i=0;i<=90;i+=10){
		if(i==90){
			printf("%3d~%3d:",i,i+10);
			for(int j=1;j<=count[i/10];j++)
				printf("*");
			printf("\n");	
		}
		else{
			printf("%3d~%3d:",i,i+9);
			for(int j=1;j<=count[i/10];j++)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}
