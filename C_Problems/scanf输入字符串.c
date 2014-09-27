#include<stdio.h>
int main(void)
{
	char str[50];
	scanf("%49[^\n]",str);///[^\n]  ^表示补集 \n表示接收到回车 表示接收字符一直到遇到回车 
	printf("%s\n",str);
return 0;
}
