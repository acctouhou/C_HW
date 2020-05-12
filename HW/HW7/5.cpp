#include<stdio.h>
#include<ctime>
#include<cstdlib>
int main(){
	int go,temp=0,counter=0,r=0,l=0;
	srand(time(NULL));
	for(int i=10000;i>0;i--){
		temp=0;
		while(temp>-5&&temp<4){
			go=rand()%2+1;
			go==2?temp++:temp--;
			if(temp==-2){
				temp=-4;
			}
			counter++;
		}
		temp==4?r++:l++;
	}
	printf("minute=%lf R=%lf L=%lf \n",counter/10000.,r/10000.,l/10000.);
	temp=0;counter=0;r=0;l=0;
	for(int i=10000;i>0;i--){
		temp=0;
		while(temp>-5&&temp<4){
			go=rand()%2+1;
			go==2?temp++:temp--;
			if(temp==-2&&go==1){
				temp=-4;
			}
			counter++;
		}
		temp==4?r++:l++;
	}
	printf("minute=%lf R=%lf L=%lf",counter/10000.,r/10000.,l/10000.);
	return 0;
	
}
