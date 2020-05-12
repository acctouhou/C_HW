#include<stdio.h>
int main(){
	int x;
	char a='A';
	scanf("%d",&x);
	for(int i=0;i<=4*(x-1);i++){
		for(int j=1;j<=4*(x-1)+1;j++){
			if(j<=(2*(x-1)+1-i)&&i<=(2*(x-1))){
				printf("%2c",a);
				if(j%2==0)
					a++;
			}
			if(j==2*(x-1+1))
				a--;
			else if(i<=(2*(x-1)+1)&&j>=(2*(x-1)-1+i)){
				printf("%2c",a);
				if(j%2==0)
					a--;
			}
				
		}
		printf("\n");
	}
	
	return 0;
}
