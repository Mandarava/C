#include<stdio.h>
int f(int a)
{	
	int s[60]={1,1,2,3,4};
	if(a>4)
	{
	for(int i=5;i<=a;i++)
	s[i]=s[i-1]+s[i-3];
	}
	return s[a];
}
int main()
{
    int a;
    while(scanf("%d",&a)==1&&a!=0)
        printf("%d\n",f(a));
    return 0;
}
