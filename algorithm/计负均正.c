#include<stdio.h>
int main()
{
	float avg;
	int a[20],sum=0,num=0;
	for(int i=0;i<20;i++)
	{
	scanf("%d",&a[i]);
	if(a[i]>0)
	sum+=a[i];
	else
	num++;
	}
	avg=sum/(20.0-num);
	printf("%d\n%.2f\n",num,avg);
	
}
