#include <stdio.h>
#include <ctime>
#include <cstdlib>
int get(){
	int die_1,die_2;
	die_1=rand()%6+1;
	die_2=rand()%6+1;
	return die_1+die_2;
}
int main(){
	int temp_1=0,temp_2=0,temp_3=0,temp_4=0,temp_5=0,temp_6=0,temp_7=0,temp_8=0,temp_9=0,temp_10=0,temp_11=0,temp_12=0;
	for(int i=1;i<=10000;i++){
		temp_1=get();
		switch(temp_1){
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
			case 7:
				temp_7++;
				break;
			case 8:
				temp_8++;
				break;
			case 9:
				temp_9++;
				break;
			case 10:
				temp_10++;
				break;
			case 11:
				temp_11++;
				break;
			case 12:
				temp_12++;
				break;
		}
	}
	int max;
	max=temp_2;
	max<temp_3?max=temp_3:NULL; 
	max<temp_4?max=temp_4:NULL; 
	max<temp_5?max=temp_5:NULL; 
	max<temp_6?max=temp_6:NULL; 
	max<temp_7?max=temp_7:NULL; 
	max<temp_8?max=temp_8:NULL; 
	max<temp_9?max=temp_9:NULL; 
	max<temp_10?max=temp_10:NULL; 
	max<temp_11?max=temp_11:NULL; 
	max<temp_12?max=temp_12:NULL; 
	max==temp_2?printf("most likely:2"):NULL; 
	max==temp_3?printf("most likely:3"):NULL; 
	max==temp_4?printf("most likely:4"):NULL; 
	max==temp_5?printf("most likely:5"):NULL; 
	max==temp_6?printf("most likely:6"):NULL; 
	max==temp_7?printf("most likely:7"):NULL; 
	max==temp_8?printf("most likely:8"):NULL; 
	max==temp_9?printf("most likely:9"):NULL; 
	max==temp_10?printf("most likely:10"):NULL; 
	max==temp_11?printf("most likely:11"):NULL; 
	max==temp_12?printf("most likely:12"):NULL; 
	return 0;
}

