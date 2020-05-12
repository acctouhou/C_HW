#include<stdio.h>
#include<math.h>
int main(){
	int x,y,n=0;
	scanf("%d %d",&y,&x);
	printf("     0  1  2  3  4  5  6  7  8  9  10\n");
	printf("----------------------------------\n");
	for(int i=1;i<=132;i++){
		i%12==1?printf("%2d | ",n):0;
		n=i/12;
		i%12!=0?printf("%2d ",abs(i%12-x-1)+abs(y-n)):printf("\n");
		

	}
	
	return 0 ;
}
