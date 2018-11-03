#include<stdio.h>
#include<math.h>
void num_1(int a){
	switch (a){
		case 0:
			printf("¹s");
			break;
		case 1:
			printf("³ü");
			break;
		case 2:
			printf("¶L");
			break;
		case 3:
			printf("°Ñ");
			break;
		case 4:
			printf("¸v");
			break;
		case 5:
			printf("¥î");
			break;
		case 6:
			printf("³°");
			break;
		case 7:
			printf("¬m");
			break;
		case 8:
			printf("®Ã");
			break;
		case 9:
			printf("¨h");
			break;
	}
}
void num_2(int a){
	switch (a){
		case 1:
			printf("¬B");
			break;
		case 2:
			printf("¨Õ");
			break;
		case 3:
			printf("¥a");
			break;
		case 4:
			printf("¸U");
			break;
		case 5:
			printf("»õ");
			break;
	}
}
int test(int a){
	int t=0;
	while(a>10){
		a/=10;
		t++;
	}
	return t;
}
int tran(int a,int b){
	if(b>0){
		for(int i=1;i<=b;i++){
			a/=10000;
		}
	}
	return a;
}
int c(int a){
	int t=1;
	for(int i=1;i<=a;i++){
		t*=10;
	}
	return t;
}
int main(){
	int temp;
	int a;
	scanf("%d",&temp);
	for(int i=0;i<test(temp)+1;i++){
		num_1(temp/c(test(temp)-i)%c(i));
		num_2(test(temp)-i);
		
	}
	
	
	
	
	return 0;
}
