#include<stdio.h>
int main(){
	int coupon,bar;
	printf("number of dollars:");
	scanf("%d",&coupon);
	bar=coupon;
	while(coupon>=7){
		bar+=coupon/7;
		coupon=coupon/7+coupon%7;
	}
	printf("chocolate bars: %d\n",bar);
	printf("remaining coupons: %d",coupon);
	
	return 0;
} 
