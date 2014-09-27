//scanf()函数误输入造成程序死锁或出错
#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d,%d",&a,&b);
	//while(scanf("%d%d",&a,&b)!=2)   //用此处替代即可解决 
	//fflush(stdin);
	c=a+b;
	printf("%d+%d=%d",a,b,c);
	return 0;
}
