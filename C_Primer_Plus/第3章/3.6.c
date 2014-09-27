#include<stdio.h>
int main()
{	int a;
	double n;
	printf("请输入水的夸脱数\n");
	scanf("%d",&a);
	n=950*(double)a/3.0e-23;
	printf("水分子个数为%.5e\n",n);
	return 0;
}
