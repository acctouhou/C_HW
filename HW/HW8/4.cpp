#include<stdio.h>
double force(double x){
	double move;
	if (x<-0.2)
		move=x*1;
	else if(x>0.2)
		move=x*2;
	return move;
}
int main(){
	char v;
	double temp,loc=1.5;
	while(scanf("%lf %c",&temp,&v)){
		loc+=force(temp);
	}
	printf("%lf",loc);
	
	return 0;
}
