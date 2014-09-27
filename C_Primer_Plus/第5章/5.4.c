#include<stdio.h>
#define INCH 2.54  // 1 inch = 2.54cm
int main()
{	int a;
	printf("enter a height in centimeters\n");
	scanf("%d",&a);
	while(a>0)
	{
		printf("%.1f cm = %d feet, %.1f inches\n",(float)a,int(a/(INCH*12)),a/INCH-int(a/INCH/12)*12);
		printf("enter a height in centimeters (<=0 to quit)\n");
		scanf("%d",&a);
	}
	printf("bye\n");
	return 0;
}
	 
