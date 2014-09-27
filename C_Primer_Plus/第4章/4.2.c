#include<stdio.h>
#include<string.h>
int main()
{	char a[20];
	int width;
	printf("please input your name\n");
	scanf("%s",a);
	printf("a: \"%s\"  \n",a);
	printf("b: \"%20s\" \n",a);
	printf("c: \"%-20s\" \n",a);
	width=strlen(a)+3;
	printf("d: \"%*s\"    \n",width,a);
}
