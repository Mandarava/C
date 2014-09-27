#include<stdio.h>
int main()
{	float a;
	scanf("%f",&a);
	printf("a. The input is %f or %.1e\n",a,a);
	printf("b. The input is %.3f or %.3E\n",a,a);
}
