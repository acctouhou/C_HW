#include<stdio.h>
#include<math.h>
int main(){
	double a,b;
	printf("input:");
	scanf("%lf %lf",&a,&b);
	printf("\n123456789012345678901234567890123456789012345678901234567890\n");
	printf("%10.5f = %-12.2f + %016.10f + %010.5f\n",a,a,(int)(a*10000)%100*0.0001,(int)(a*100000)%10*0.00001);
	printf("%010.1f + %12.5f = %-16.3f \n",a,b,a+b);
	printf("%010.6f * %012.10f = %016.7f\n",a,b,a*b);
	printf("%-10.3f / %012.3f = %-16.5f",a,b,a/b);
	return 0;
}
