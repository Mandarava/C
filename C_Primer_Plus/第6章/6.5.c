#include<stdio.h>
int main()
{	int a,b;
	printf("please input the min and max\n");
	scanf("%d",&a);
	scanf("%d",&b);
	for(a;a<=b;a++)
		{
			printf("%5d%5d%5d",a,a*a,a*a*a);
			printf("\n");
		}
}
