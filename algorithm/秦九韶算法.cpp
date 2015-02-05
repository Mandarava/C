#include<stdio.h>  
// 快速计算 (a ^ p) % m 的值
__int64 FastM(__int64 a, __int64 p, __int64 m)
{ 
    if (p == 0) return 1;
    __int64  r = a % m;
    __int64  k = 1;
    while (p > 1)
    {
        if ((p & 1)!=0)
        {
            k = (k * r) % m; 
}
              r = (r * r) % m;
            p >>= 1;
        }
        return (r * k) % m;
}

int main()
{	__int64 a,b,c;
	printf("enter the first number\n");
	scanf("%lld",&a);
	printf("enter the second number\n");
	scanf("%lld",&b);
	printf("enter the third number\n");
	scanf("%lld",&c);  
	printf("the result is:%d\n",FastM(a,b,c));
	return 0;
}
