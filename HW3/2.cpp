#include<stdio.h>
#include <windows.h>
int main(){
	SetConsoleOutputCP(437);
	printf("%c",201);
	for(int i=1;i<=18;i++){
		printf("%c",205);
	}
	printf("%c\n",187);
	for(int i=32;i<=126;i+=4){
		printf("%c %3d : %c |",186,i,i);
		printf("%3d : %c |",i++,i++);
		printf("%3d : %c |",i++,i++);
		printf("%3d : %c %c\n",i++,i++,186);
	}
	printf("%c",200);
	for(int i=1;i<=18;i++){
		printf("%c",205);
	}
	printf("%c\n",188);
	return 0;
} 
