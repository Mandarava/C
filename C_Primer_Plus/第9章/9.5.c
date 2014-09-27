#include<stdio.h>
double large_of(double *, double *);
int main()
{
	double x,y;
	scanf("%lf%lf",&x,&y);
	large_of(&x,&y);	
	printf("%lf %lf\n",x,y);
	return 0;	
}
double large_of(double *x, double *y)
{
	*x=*y=*x>*y?*x:*y;	
}
