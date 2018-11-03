#include<iostream>
using namespace std;
int main(){
	int m,d,f;
	cin>>m>>d;
	switch (m){
		case 1:
			f=1+(d-10)%7;
			break;
		case 2:
			f=1+(d-21)%7;
			break;
		case 3:
			f=1+(d+6)%7;
			break;
		case 4:
			f=1+(d-4)%7;
			break;
		case 5:
			f=1+(d-9)%7;
			break;
		case 6:
			f=1+(d-6)%7;
			break;
		case 7:
			f=1+(d-11)%7;
			break;
		case 8:
			f=1+(d-8)%7;
			break;
		case 9:
			f=1+(d-5)%7;
			break;
		case 10:
			f=1+(d-10)%7;
			break;
		case 11:
			f=1+(d-7)%7;
			break;
		case 12:
			f=1+(d-12)%7;
			break;
	}
	while(f<=0){
		f+=7;
	}
	switch(f){
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Firday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
			break;
	}
	return 0;
}
