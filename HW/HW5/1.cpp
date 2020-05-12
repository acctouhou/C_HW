#include<stdio.h>
#include<math.h>
int main(){
	int i=1;
	double temp=1,e=1;
	while(fabs(temp)>1e-5){
		temp=1;
		for(int j=1;j<=i;j++){
			temp*=1.0/j;
		}
		e+=temp;
		i++;
	}
	printf("a: %lf \n",e);
	i=2;
	e=0;
	double temp_1=1,temp_2=0;
	while(fabs(temp_1-temp_2)>1e-3){
		temp_2=temp_1;
		temp_1=1;
		for(int j=1;j<=i;j++){
			temp_1*=1.0/j;
		}
		e+=temp_1;
		i++;
	}
	printf("b: %lf",e+2);
	
	return 0;
}
