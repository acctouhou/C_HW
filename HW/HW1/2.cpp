#include<stdio.h>
int main(){
	int a;
	printf("Program to convert Fahrenheit to Celsius\n");
	printf("Fahrenheit temperature?");
	scanf("%d",&a);
	printf("Celsius equivalent: %f",5.00*(a-32.00)/9.00);
	return 0;
}
