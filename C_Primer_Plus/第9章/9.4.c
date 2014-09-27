#include<stdio.h>
double avg(double ,double);
int main()
{
	double x,y,z;
	scanf("%lf%lf",&x,&y);
	z=avg(x,y);
	printf("%lf\n",z);	
}
double avg(double x,double y)
{
	return 1/((1/x+1/y)/2);	
	
}
