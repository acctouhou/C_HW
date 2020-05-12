#include<stdio.h>
#include<conio.h>
int main(){
	char temp[256];
	int i=0;
	char a;
	bool fuck=1;
	while(1){
		fuck=1;
		while(a=scanf("%c",&a)){
			temp[i]=a;
			i++;
		}
		for(int j=0;j<(i/2);j++){
			if (temp[j]!=temp[i-j])
				fuck=0;
		}
		fuck!=0?printf(" palindrome"):printf("not");
	}
	return 0;
}
