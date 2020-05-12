#include<stdio.h>
int main(){
	char term;
	double x,y;
	printf("input:");
	scanf("%lf %c %lf",&x,&term,&y);
	switch(term){
		case '+':
			printf("%lf",x+y);
			break;
		case '-':
			printf("%lf",x-y);
			break;
		case '*':
			printf("%lf",x*y);
			break;
		case '/':
			printf("%lf",x/y);
			break;
	}
	
	return 0;
} 
