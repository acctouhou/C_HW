#include<stdio.h>
#include<math.h>
int main(){
	int temp,x=0,max=0;
	scanf("%d",&temp); 
	while(temp!=0){
		x+=temp;
		x<0?x=0:NULL;
		x>max?max=x:NULL;
		scanf("%d",&temp); 
	}
	printf("%d",max);
	return 0;
}
