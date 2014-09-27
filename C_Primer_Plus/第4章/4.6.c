#include<stdio.h>
#include<float.h>
int main()
{
	double a=1.0/3.0;
	float b=1.0/3.0;
	printf("double: %.4f   float: %.4f\n",a,b);
	printf("double: %.12lf  float: %.12f\n",a,b);
	printf("double: %.16lf  float: %.16f\n",a,b);
	printf("FLT_DIG:%d\n",FLT_DIG);
	printf("DBL_DIG:%d\n",DBL_DIG);
	return 0;
}
