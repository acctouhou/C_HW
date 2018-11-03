#include<stdio.h>
#include<math.h>
using namespace std;
int Binary(int n){ 
    int ans_1=0,m=1;
    while(n!=0)
    {
       ans_1=ans_1+(n%2)*m;
       n=n/2;
       m=m*10;
    }
    return ans_1;
}
 
int main(){
	int i=1,j=0,stop,total_2[99],temp=0,ans[99],data[99][99],plus[99];
	while (i!=0){
		j++;
		scanf("%d",&i);
		plus[j]=i;
		for(int num=1;num<=i;num++){
			data[num][j]=0;
			scanf("%d",&data[num][j]);
		}
		for(int test=1;test<=i;test++){
			total_2[j]=Binary(data[test][j])+total_2[j];
		}
	}
	for(int wtf=1;wtf<=j;wtf++){
		ans[wtf]=0;
		while(total_2[wtf]!=0){
			if(total_2[wtf]%2==1){
				ans[wtf]+=plus[wtf];
			}
			total_2[wtf]=total_2[wtf]/10;
		}
	}
	for(int final=1;final<j;final++){
		printf("%d \n",ans[final]);
	}
	return 0;
}
