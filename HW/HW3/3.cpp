#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main(){
	double  data[6];
	double fx=0,x;
	printf("input x:");
	scanf("%lf",&x);
	//----------------a------------------
	printf("input coefficient:");
	for (int i=1;i<=6;i++){
		scanf("%lf",&data[i]);
		fx+=data[i]*pow(x,6-i);
		}
	printf("case_A: %lf \n",fx);
	//21 multiplication 5 addition
	//----------------b------------------
	fx=0;
	double s;
	fx=data[1];
	for(int i=2;i<=6;i++){
		fx=fx*x+data[i];
	}
	printf("case_B: %lf \n",fx);
	//5 multiplication 5 addition 
	return 0;
}
