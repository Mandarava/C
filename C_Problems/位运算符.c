#include<stdio.h>
int main()
{
	int a=3,b=7;
	printf("a&b=%d\n",a&b);
	printf("a|b=%d\n",a|b);
	printf("~a=%d\n",~a);
	printf("a<<3=%d\n",a<<3);//左移相当于乘以2的N次方 ！！！对数的运算精确到每一位 速度快 
	
}
