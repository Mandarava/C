#include<stdio.h>
int main()
{	int a,b;
	printf("please input a number\n");
	scanf("%d",&a);
	b=a+10;
	while(a<=b)
		printf("%d ",a++);
}
