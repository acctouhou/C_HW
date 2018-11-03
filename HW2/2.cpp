#include<stdio.h>
#include<math.h>
int main(){
	//case1
	int num1,num2;
	printf("case1\n");
	printf("input:");
	scanf("%d %d",&num1,&num2);
	printf("sum:%d\n",num1+num2);
	printf("product:%d\n",num1*num2);
	printf("difference:%d\n",abs(num1-num2));
	printf("quotient:%d\n",num1/num2);
	//case2
	float num3,num4;
	printf("case2\n");
	printf("input:");
	scanf("%f %f",&num3,&num4);
	printf("sum:%f\n",num3+num4);
	printf("product:%f\n",num3*num4);
	printf("difference:%f\n",fabs(num3-num4) );
	printf("quotient:%f\n",(num3-fmod(num3,num4))/num4);
	//case3
	double num5,num6;
	printf("case3\n");
	printf("input:");
	scanf("%lf %lf",&num5,&num6);
	printf("sum:%lf\n",num5+num6);
	printf("product:%lf\n",num5*num6);
	printf("difference:%lf\n",fabs(num5-num6));
	printf("quotient:%lf\n",(num5-fmod(num5,num6))/num6);
	//case4
	int num7;
	float num8;
	printf("case4\n");
	printf("input:");
	scanf("%d %f",&num7,&num8);
	printf("sum:%f\n",num7+num8);
	printf("product:%f\n",num7*num8);
	printf("difference:%f\n",fabs(num7-num8));
	printf("quotient:%f\n",(num7-fmod(num7,num8))/num8);
	return 0;
}
