#include<stdio.h>

void equations(double a, double b, double c, double d, double e, double f){
	double x, y;
	
	y=(a*f - d*c)/ (a*e - d*b);
	
	x = ( c-b*y)/a;
	
	printf("x = %.2lf / n", x);
	printf("y = %.2lf / n", y); 
	
}

int main(){
	double a, b, c, d, e,f;
	printf("Enter the coefficents(a, b, c):\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	printf("Enter the coefficents( d, e,f):\n");
	scanf("%lf %lf %lf", &d, &e, &f);
	
	equations( a, b, c, d, e, f);
	
	return 0;
}