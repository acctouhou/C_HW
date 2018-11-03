#include<stdio.h>
int main(){
	int fib1=0,fib2=1,fib3;
	printf("Fibonacci series: %d,",fib1);
	for(fib3=1;fib3<12;fib3++){
		if(fib2>fib1){
			printf("%d,",fib2);
			fib1=fib2+fib1;
		}
		else{
			printf("%d,",fib1);
			fib2=fib1+fib2;
		}
	}
	return 0;
}
