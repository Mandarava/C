//数列如下 1 2 3 4 6 8 10 13 16 19 23 27。。。 
#include<stdio.h>
int calculate(int n, int m);
int main()
{
	int n=0;
	while(	scanf("%d",&n)==1&&n!=0) 
	{ 
	printf("%d\n",calculate(n,2));
	} 
}
int calculate(int n, int m)
{	int a[70]={0,1,2,3,4};
	int i,c=0,d=5;
	for(int j=0;j<=(int)(n-2)/3;j++)	
	{
		for(i=d;i<=n;i++)		
		{
			if(c++!=3)
			{
				a[i]=a[m]+a[i-1];
			}
			else
				break;
		}
		m++;
		c=0;
		d=d+3;
	}
	return a[n];
}
