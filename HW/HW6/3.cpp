#include<stdio.h>
int main(){
	double x,y;
	printf("input:");
	scanf("%lf %lf",&x,&y);
	if (y==0){
		if(x==0){
			printf("is the origin");
		}
		else
			printf("is on the x-axis");
	}
	if (x==0&&y!=0){
		printf("is on the y-axis");
	}
	if(x>0){
		if(y>0){
			printf("is in the frist quadrant");
		}
		else if (y<0){
			printf("is in the fourth quadrant");
		}
	}
	else if (x<0)
		if(y>0){
			printf("is in the second quadrant"); 
		}
		else if(y<0){
			printf("is in the third quadrant");
		}
	return 0;
}
