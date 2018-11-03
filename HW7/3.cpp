#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include<math.h>
int main(){
	double counter=0,area,x,y,seed;
	const double  mpy = 25173.0;
	const double  inc =13849.0;
	const double  mod =65535.0;
	srand(time(NULL));
	seed=rand();
	for(int i=1000;i>=1;i--){
		seed=fmod(seed*mpy+inc,mod);
		x=seed/mod;
		seed=fmod(seed*mpy+inc,mod);
		y=seed/mod;
		((0.5-x)*(0.5-x)+(0.5-y)*(0.5-y))<=0.25?counter++:NULL;
	}
	area=counter/1000;
	printf("proportion=%lf \n",area);
	printf("pi=%lf",area*4);
	return 0;
}

