#include<stdio.h>
int main()
{
	int a,i;
	int b[100];
	int sum=0;
	scanf("%d",&a);	
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
		if(b[i]%2==0)
		{
		sum+=b[i];
		}
	}
	printf("%d\n",sum);
	
}
