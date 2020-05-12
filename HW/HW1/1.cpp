#include<stdio.h>
int main(){
	//case 1
	float a,b,c,d,e;
	printf("input five floating-point:");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	printf("five floating-point numbers: %f %f %f %f %f\n",a,b,c,d,e);
	printf("sum: %f\n",a+b+c+d+e);
	printf("average: %f\n",(a+b+c+d+e)/5);
	//case 2
	float data[5];
	int i;
	printf("input five floating-point:");
	for(i=1;i<6;i++){
		scanf("%f",&data[i]);
	}
	printf("five floating-point numbers: %f %f %f %f %f\n",data[1],data[2],data[3],data[4],data[5]);
	printf("sum: %f\n",data[1]+data[2]+data[3]+data[4]+data[5]);
	printf("average: %f",(data[1]+data[2]+data[3]+data[4]+data[5])/5);
	return 0;
} 
