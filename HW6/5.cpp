#include<stdio.h>
#include<math.h>
void fun_1(int x){
	for (int i=1;i<x;i++){
		if (x%i==0)
		printf("%d,",i);
	}
	printf("%d \n",x);
}
void fun_2(int x){
	int temp=0;
	for (int i=2;i<x;i++){
		if (x%i==0)
			temp=1;
	}
	if (temp==0)
		printf("Prime\n");
	else 
		printf("Not_prime\n");
}
void fun_3(float t){
	if (fmod(t,2)==0)
		printf("even\n");
	else
		printf("odd\n");
}
int main(){
	int c,temp=0;
	float t;
	int test;
	while(temp!=1){
		printf("1.Factorial of a number\n");
		printf("2.Prime or not\n");
		printf("3.Odd or even\n");
		printf("4.Exit\n");
		scanf("%d",&c);
		switch(c){
			case 1 :
				printf("input:");
				scanf("%d",&test);
				fun_1(test);
				break;				
			case 2 :
				printf("input:");
				scanf("%d",&test);
				fun_2(test);
				break;
			case 3 :
				printf("input:");
				scanf("%f",&t);
				fun_3(t);
				break;
			case 4 :
				temp=1;
				break;
		} 
	} 
	return 0;
}
