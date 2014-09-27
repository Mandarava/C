#include<stdio.h>
int a=5;
int *example1(int b)
{
	a+=b;
	return &a;
}
int *example2(int b)
{
	int c=5;
	b+=c;
	return &b;		//当函数example2（）调用结束后便消失，是b指向了一个不确定的区域，产生指针悬挂。
}
void main()
{
	int *a1=example1(10);
	int *b1=example2(10);
	printf("%d\n",*a1);
	printf("%d\n",*b1);
}

