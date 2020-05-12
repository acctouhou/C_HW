#include <stdio.h>
#include <ctime>
#include <cstdlib>
int main(){
	int die,temp_1=0,temp_2=0,temp_3=0,temp_4=0,temp_5=0,temp_6=0;
	srand(time(NULL));
	for(int i=1;i<=6000;i++){
		die=rand()%6+1;
		switch(die){
			case 1:
				temp_1++;
				break;
			case 2:
				temp_2++;
				break;
			case 3:
				temp_3++;
				break;
			case 4:
				temp_4++;
				break;
			case 5:
				temp_5++;
				break;
			case 6:
				temp_6++;
				break;
		}
	}
	printf("1=%d 2=%d 3=%d 4=%d 5=%d 6=%d ",temp_1,temp_2,temp_3,temp_4,temp_5,temp_6);
	
	return 0;
}



