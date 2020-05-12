#include<stdio.h>
#include<math.h>
int main(){
	double a,term,sum=1,temp=sqrt(2)/2;
	do{
		a=sum;
		term=temp;
		sum*=term;
		temp=sqrt(temp*2+2)/2;
	}while(fabs(a-sum)>1E-15);
	printf("%.15lf",1.*2/sum);
	
	return 0;
}

