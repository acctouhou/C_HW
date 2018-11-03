#include<stdio.h>
using namespace std;
int data[32];

int group_mass(int frist,int end){
	int sum=0;
	for(int i=frist;i<end+1;i++){
		sum=sum+data[i];
	}
	return sum;
}
int main(){
	int i;
	int fakeid;
	float true_cone;
	float fakemass;
	char fake_mass;
	float group1,group2,group3,group4,fakegroup;
	printf("intput true cone mass:");
	scanf("%f",&true_cone);
	printf("intput fake id:");
	scanf("%d",&fakeid);
	printf("intput fake mass:");
	scanf("%f",&fakemass);
	for(i=1;i<33;i++){
		data[i]=true_cone;
	}
	data[fakeid]=fakemass;
	group1=group_mass(1,8);
	group2=group_mass(9,16);
	group3=group_mass(17,24);
	group4=group_mass(25,32);
	if(group1==group2){
		if(group3==group2){
			fakegroup=group4;
			if(group4>group3){
				fake_mass='h';
			}
			else{
				fake_mass='l';
			}
			if(data[32]+data[31]!=data[30]+data[29]){
				if(data[32]!=data[31]){
					if(data[32]!=data[1]){
						printf("fake coin¡G32\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G31\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
				else{
					if(data[30]!=data[1]){
						printf("fake coin¡G30\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G29\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
			}
			else{
				if(data[28]!=data[27]){
					if(data[28]!=data[1]){
						printf("fake coin¡G28\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G27\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
				else{
					if(data[26]!=data[1]){
						printf("fake coin¡G26\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G25\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
			}
		}
		else{
			fakegroup=group3;
			if(group3>group2){
				fake_mass='h';
			}
			else{
				fake_mass='l';
			}
			if(data[24]+data[23]!=data[22]+data[21]){
				if(data[24]!=data[23]){
					if(data[24]!=data[1]){
						printf("fake coin¡G24\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G23\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
				else{
					if(data[22]!=data[1]){
						printf("fake coin¡G22\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G21\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
			}
			else{
				if(data[20]!=data[19]){
					if(data[20]!=data[1]){
						printf("fake coin¡G20\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G19\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
				else{
					if(data[18]!=data[1]){
						printf("fake coin¡G18\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G17\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
			}
		}
	}
	else{
		if(group3==group1){
			fakegroup=group2;
			if(group2>group1){
				fake_mass='h';
			}
			else{
				fake_mass='l';
			}
			if(data[16]+data[15]!=data[14]+data[13]){
				if(data[16]!=data[15]){
					if(data[16]!=data[1]){
						printf("fake coin¡G16\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G15\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
				else{
					if(data[14]!=data[1]){
						printf("fake coin¡G14\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G13\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
			}
			else{
				if(data[12]!=data[11]){
					if(data[12]!=data[1]){
						printf("fake coin¡G12\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G11\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
				else{
					if(data[10]!=data[1]){
						printf("fake coin¡G10\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G9\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
			}
		}
		else{
			fakegroup=group1;
			if(group1>group4){
				fake_mass='h';
			}
			else{
				fake_mass='l';
			}
			if(data[8]+data[7]!=data[6]+data[5]){
				if(data[8]!=data[7]){
					if(data[8]!=data[32]){
						printf("fake coin¡G8\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G7\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
				else{
					if(data[6]!=data[32]){
						printf("fake coin¡G6\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G5\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
			}
			else{
				if(data[4]!=data[3]){
					if(data[4]!=data[32]){
						printf("fake coin¡G4\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G3\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
				else{
					if(data[2]!=data[32]){
						printf("fake coin¡G2\n");
						printf("fake mass: %c\n",fake_mass);			
					}
					else{
						printf("fake coin¡G1\n");
						printf("fake mass: %c\n",fake_mass);
					}
				}
			}
		}
	}
	return 0;
}

