#include<stdio.h>
int main(){
	int t,o,g,d,count=0;
	while (1){
		t=count/1000;
		o=count/100%10;
		g=count/10%10;
		d=count%10;
		if(4*(100*t+11*o)==g*1000+o*110+d&&t!=o!=g!=d){
			break;
		}
		count++;
	}
	printf("T : %d\n",t);
	printf("O : %d\n",o);
	printf("G : %d\n",g);
	printf("D : %d",d);
	return 0;
}
