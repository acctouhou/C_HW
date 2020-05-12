#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
	srand(time(NULL));
	int x,temp;
	for(int i=1;i<=10;i++){
		x=rand();
		temp=x%22+12;
		printf("%d\n",temp);
	}
	printf("%d\n",RAND_MAX);
	int y;
	for(int i=1;i<=10;i++){
		y=22*rand()/(RAND_MAX+1)+12;
		printf("%d\n",y);
	}
	double t;
	for(int i=1;i<=10;i++){
		t=2.2*rand()/(RAND_MAX+1)+1.2;
		printf("%.4lf ",t);
	}
	printf("\n");
	double temp_1,temp_2,n_1=0,n_2=0;
	for(int i=1;i<=1e8;i++){
		temp_1=rand()%22000/10000.0+1.2;
		if(temp_1>=2.3)
		n_1++;
	}
	for(int i=1;i<=1e8;i++){
		temp_2=2.2*rand()/(RAND_MAX+1)+1.2;
		if(temp_2>=2.3)
			n_2++;
	}
	
	
	printf("theoretical: 0.500000\n");
	printf("nonuniform: %lf\n",n_1/1e8);
	printf("uniform   : %lf",n_2/1e8);
	
	return 0;
}
