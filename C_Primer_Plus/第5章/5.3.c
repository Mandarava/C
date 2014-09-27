#include<stdio.h>
#define week 7
int main()
{	int a;
	printf("please input days\n");
	scanf("%d",&a);
	while(a>0){
	printf("%d days are %d weeks, %d days\n",a,a/week,a%week);
	scanf("%d",&a);}
	return 0;
}
