#include<stdio.h>
int main()
{
	int a[100];
	a[0]=0,a[1]=1,a[2]=1;
	int i,n;
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	a[i]=a[i-2]+a[i-1];
	printf("%d\n",a[n]);
}
