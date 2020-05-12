#include<stdio.h>
int main(){
	int x,y,z,d,temp;
	while(scanf("%d %d %d",&x,&y,&z)){
		
		d=z;
		while(x%d!=0||y%d!=0||z%d!=0){
			d--;
		}
		printf("%d\n",d);
	}
	
	return 0;
}




