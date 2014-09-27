//求a，b，c最大值 
#include<stdio.h>
int max(int x,int y,int z)
{	int d;
	if(x>y&&x>z)d=x;
	else if(y>x&&y>z)d=y;
	else d=z;
}
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=max(a,b,c);
	printf("%d",d);
	return 0;
}
