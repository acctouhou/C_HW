#include<stdio.h>
int temp(int x){
	int day;
	day=(x+(x-1)/4-(x-1)/100+(x-1)/400)%7;
	return day;
}
int main(){
	int x;
	scanf("%d",&x);
	switch(temp(x)){
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 0:
			printf("Sunday");
			break;
	}
	return 0;
}
