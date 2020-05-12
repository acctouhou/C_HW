#include <iostream>
#include <cstdio>

using namespace std;
 void hanoi(int n, char A, char B, char C)
 {
	if(n == 1)
	{
		printf("Move 1 from %c to %c\n", A, C);
	}
	else
	{
		hanoi(n-1,'A','B','C');
		printf("move %d from %c to %c \n",n,A,C);
		hanoi(n-1,B,C,A);
	}
}
int main()
{
	int n;
	printf("½Ð¿é¤J½L¼Æ¡G");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}


