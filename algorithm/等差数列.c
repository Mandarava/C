#include<stdio.h>
int main()
{
	int a[100]={2};
	int sum=0,n;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++)
	a[i]=a[i-1]+3;
	for(int i=0;i<n;i++)
	sum+=a[i];
	printf("%d\n",sum);	
		
}
