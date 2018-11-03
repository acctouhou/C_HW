#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include<math.h>
int main(){
	int rank,suit;
	srand(time(NULL));
	rank=rand()%13+1;
	suit=rand()%4+1;
	switch(rank){
		case 1:
			printf("ace");
			break;
		case 2:
			printf("2");
			break;
		case 3:
			printf("3");
			break;
		case 4:
			printf("4");
			break;
		case 5:
			printf("5");
			break;
		case 6:
			printf("6");
			break;
		case 7:
			printf("7");
			break;
		case 8:
			printf("8");
			break;
		case 9:
			printf("9");
			break;
		case 10:
			printf("10");
			break;
		case 11:
			printf("jack");
			break;
		case 12:
			printf("queen");
			break;
		case 13:
			printf("king");
			break;
	}
	printf(" of ");
	switch(suit){
		case 1:
			printf("clubs");
			break;
		case 2:
			printf("diamond");
			break;
		case 3:
			printf("hearts");
			break;
		case 4:
			printf("spades");
			break;
	}
	return 0;
}
