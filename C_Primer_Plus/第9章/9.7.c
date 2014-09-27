#include<stdio.h>
double power(double , int );
int main(void)
{
	double x;
	int exp;
	printf("input the base number and the exponent:");
	scanf("%lf%d",&x,&exp);
	printf("%.3g to the power %d is %.5g\n", x, exp, power(x,exp));
	return 0;
}

double power(double n, int p)
{
	int i;
	double pow=1;
	if (p>0)
	for(i=1;i<=p;i++)
	pow *= n;
	else if(p<0)
	for(i=-1;i>=p;i--)
	pow /= n;
	else if(n != 0)
	pow = 1;
	else pow = 1 / n; 	
	return pow;
}

