#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	//--------------a---------------
	printf("--------------a--------------\n");
	int sum_a=0;
	for(int i=n;i>=10;i--){
		sum_a+=2*i;
	}
	printf("%d \n",sum_a);
	//--------------b---------------
	printf("--------------b--------------\n");
	double sum_b=0;
	for(int i=1;i<=n;i++){
		sum_b+=1.0/(2*i-1);
	}
	printf("%lf \n",sum_b);
	//--------------c---------------
	printf("--------------c--------------\n");
	double sum_c=0;
	double temp=0;
	for(int i=1;i<=n;i++){
		temp=1;
		for(int j=1;j<=i;j++){
			temp=temp*1/j;
		}
		sum_c+=temp;
	}
	printf("%lf \n",sum_c);
	
	//--------------d---------------
	printf("--------------d--------------\n");
	int sum_d=0;
	for(int i=1;i<=n;i++){
		sum_d+=pow(-1,i+1)*i;
	}
	printf("%d \n",sum_d);
	//--------------e---------------
	printf("--------------e--------------\n");
	int sum_e=0;
	for (int i=1;i<=n;i++){
		sum_e=sum_e+i*(n+1-i);
	} 
	printf("%d",sum_e);
	return 0;
} 
