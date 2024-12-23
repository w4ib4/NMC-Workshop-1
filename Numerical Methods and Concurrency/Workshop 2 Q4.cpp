#include<stdio.h>
#include<math.h>

double calc(double v, double u, double a, double t){
	if(v ==0){
		return v = u +a*t;
	}
	if (u==0){
		return u = v - a*t;
		
	}
	if (a == 0){
		return a= (v-u)/t;
		
	}
	if (t==0){
		return t= (v-u)/a;
	}
	
	return 0;
int main(){
	
	double v, u, a,t, result;
	printf("Enter u: ");
	scanf("%lf", &u);
	
	printf("Enter v: ");
	scanf("%lf", &v);
	
	printf("Enter a: ");
	scanf("%lf", &a);
	
	printf("Enter t: ");
	scanf("%lf", &t);
	
	
	result = calc(v, u, a, t);
	printf("The unknown value is %.2lf\n", result);
	
	return 0;
}
