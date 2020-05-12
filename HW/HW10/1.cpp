#include<stdio.h>
#include<math.h>
#include<math.h>
int temp;
double test_1(int n){
	if (n==1)
		return 0;
	return test_1(n-1)+pow(n*(n-1),-1);
}
double test_2(int n){
	if (n==1)
		return 8.0/(temp+2);
	else if(n==0)
		return 2*(temp+2);
	if ((n%2)==0)
		return test_2(n-2)*n*n/(n+1)/(n+1);
	else
		return test_2(n-2)/n/n*(n+1)*(n+1);
}
double test_3(double x ,double n){
	if(fabs(x-M_PI)>0.005)
        return test_3(x*(n-1)*(n+1)/n/n,n+2);
	else
    	return x;
}
int main(){
	int n;
	scanf("%d",&n);
	temp=n;
	printf("%lf\n",test_1(n));
	printf("%lf\n",test_2(n));
	printf("%lf",test_3(4,3));	
	return 0;
} 

