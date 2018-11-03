#include<stdio.h>
#include<math.h>
int main(){
	float r1,r2,r3,r4,r5,R;
	printf("five resistances :");
	scanf(" %f %f %f %f %f",&r1,&r2,&r3,&r4,&r5);
	R= pow((pow(r1,-1)+pow(r2,-1)+pow(r3,-1)+pow(r4,-1)+pow(r5,-1)),-1);
	printf("effective resistance: %f",R);
	return 0;
}
