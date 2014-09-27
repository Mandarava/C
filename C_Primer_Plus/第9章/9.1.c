#include<stdio.h>
double min(double,double);
int main()
{	double a,b;
	scanf("%lf%lf",&a,&b);
	min(a,b);
	printf("%lf\n",a);			
}
double min(double a,double b)
{	
	return a<b?a:b;
}
