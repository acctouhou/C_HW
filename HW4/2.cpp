#include<stdio.h>
#include<math.h>
int main(){
	int n=1,i=1;
	double sum=0,temp=1;
	while(fabs(temp)>1e-6){
		temp=1.0*i/(2*n-1);
		sum+=temp;
		n++;
		i*=-1;
		
	}
	printf("pi= %lf",sum*4);
	return 0;
}
