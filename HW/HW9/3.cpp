#include<stdio.h>
#include<math.h>
void separate(double num,char *signp,int *wholep,double *fracp){
	num>0?*wholep=abs(floor(num)) : *wholep=abs(ceil(num));
	*fracp=fabs(fmod(num,1));
	num>0?*signp='+':*signp='-'; 
}
int main(){
	double num,fracp;
	int wholep;
	char signp;
	scanf("%lf",&num);
	separate(num,&signp,&wholep,&fracp);
	printf("%c \n %d \n %lf",signp,wholep,fracp);
	return 0;
} 
