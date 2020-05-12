#include<stdio.h>
int main(){
	int f1=1,f2=1;
	while(f2<1000&&f1<1000){
		if(f2>f1){
			printf(" %d",f2);
			f1=f2+f1;
		}
		else{
			printf(" %d",f1);
			f2=f1+f2;
		}
	
	}
	return 0;
}
