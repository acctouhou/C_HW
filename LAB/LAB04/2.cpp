#include<stdio.h>
#include<math.h>
int main(){
	double pi,temp,i=1,sign=-1;
	temp=4/(2*i)/(2*i+1)/(2*i+2);
	while(fabs(temp)>1e-12){
		pi+=temp;
		i++;
		temp=4/(2*i)/(2*i+1)/(2*i+2)*sign;
		sign*=-1;

	}
	printf("%.10llf",pi+3);
	return 0;
}
