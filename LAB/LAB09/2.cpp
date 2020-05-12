#include<stdio.h>
#include<math.h>

double cross(double x1,double y1,double x2,double y2,double *u , double *v){
	*u=x1*y2;
	*v=-1*y1*x2;
	return *u+*v;
}
double dot(double x1,double y1,double x2,double y2){
	return x1*x2+y1*y2;
}
double length(double x1,double y1){
	return sqrt(x1*x1+y1*y1);
}
double angle(double x1,double y1,double x2,double y2){
	return acos(dot(x1,y1,x2,y2)/length(x1,y1)/length(x2,y2));
}
void rotate(double x1,double y1,double a,double *u , double *v){
	*u=cos(a)*x1-sin(a)*y1;
	*v=sin(a)*x1+cos(a)*y1;
}

int main(){
	double x1,y1,x2,y2,x3,y3,u,v,temp,a;
	scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&a);
	cross(x1,y1,x2,y2,&u,&v);
	printf("cross=%lf\n",u+v);
	printf("dot=%lf\n",dot(x1,y1,x2,y2));
	printf("length=%lf\n",length(x1,y1));
	printf("angle=%lf\n",angle(x1,y1,x2,y2));
	rotate(x1,y1,a,&u,&v);
	printf("new vector=( %lf , %lf) \n",u,v);
	return 0;
}
