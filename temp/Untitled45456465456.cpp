#include<stdio.h>
int main(){
	int	n;
	char a='A';
	scanf("%d",&n);
	for(int i=1;i<=(4*(n-1)+1);i++){
		a='A';
		for(int j=1;j<=(4*(n-1)+1);j++){
			if(j<((n-1)*2-i+3))
				printf("%2c",a);
				if(j%2==0)
					a++;
		}
		a=a-5;
		for(int k=1;k<=2*(i-1)-1;k++)
			printf("FF");
			
		for(int f=0;f<=(4*(n-1)-2);f++){
			if(f<((n-1)*2-i+3))
				printf("%2c",a);
				if(f%2==0)
					a--;
		}
		
		
		printf("\n");
		
	}
	return 0;
} 
