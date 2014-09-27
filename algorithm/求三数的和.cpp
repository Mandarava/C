//求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
//1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c 
#include<stdio.h>
int main()
{
	int a,b,c,i;
	int sum_a=0,sum_b=0;
	double sum_c=0,s;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);	
	for(int i=1;i<=a;i++)
	sum_a+=i;
	for(int i=1;i<=b;i++)
	sum_b+=i*i;
	for(i=1;i<=c;i++)
	sum_c+=1.0/i;	
	printf("%.2f\n",sum_c+sum_b+sum_a);
}

