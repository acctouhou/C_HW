#include<stdio.h>
#include<math.h>
void c_print(double a,double b){
	if(b!=0){
		if(b>0)
			printf("(%lf + %lfi)",a,b);
		else
			printf("(%lf - %lfi)",a,-1*b);
		}
	else
		printf("(%lf)",a);
}
void c_add(double a, double b , double c, double d, double *e , double *f){
	*e=a+c;
	*f=b+d;
}
void c_sub (double a, double b , double c, double d, double *e , double *f){
	*e=a-c;
	*f=b-d;
}
void c_mul (double a, double b , double c, double d, double *e , double *f){
	*e=(a*c-b*d);
	*f=(a*d+b*c);
}
void c_div (double a, double b , double c, double d, double *e , double *f){
	*e=(a*c+b*d)/(c*c+d*d);
	*f=(b*c-a*d)/(c*c+d*d);
}
int main(){
	double a,b,c,d;
	double e,f;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	c_add(a,b,c,d,&e,&f);
	c_print(a,b);printf(" + ");c_print(c,d);printf(" = ");c_print(e,f);printf("\n");
	c_sub(a,b,c,d,&e,&f);
	c_print(a,b);printf(" + ");c_print(c,d);printf(" = ");c_print(e,f);printf("\n");
	c_mul(a,b,c,d,&e,&f);
	c_print(a,b);printf(" + ");c_print(c,d);printf(" = ");c_print(e,f);printf("\n");
	c_div(a,b,c,d,&e,&f);
	c_print(a,b);printf(" + ");c_print(c,d);printf(" = ");c_print(e,f);printf("\n");
	
	return 0;
}
