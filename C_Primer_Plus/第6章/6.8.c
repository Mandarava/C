#include<stdio.h>
float calculate(float x,float y);
int main(void)
{	float a,b,c;
	printf("please input two floats\n");	
	while(scanf("%f%f",&a,&b)==2)	
	printf("%f\n",calculate(a,b));
	return 0;
}
float calculate(float x,float y)
{	
	return (x-y)/(x*y);
}

