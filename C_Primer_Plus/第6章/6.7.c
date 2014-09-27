#include<stdio.h>
int main(void)
{	float a,b;
	printf("please input two floats\n");	
	while(scanf("%f%f",&a,&b)==2)	
	printf("%f\n",(a-b)/(a*b));
	return 0;
}

