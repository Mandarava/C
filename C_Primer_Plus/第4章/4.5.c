#include<stdio.h>
#include<string.h>
int main()
{	
	char a[20],b[20];
	int m,n;
	printf("please input your name\n");
	scanf("%s",a);
	printf("please input your first name\n");
	scanf("%s",b);
	printf("%s %s\n",a,b);
	m=strlen(a);
	n=strlen(b);
	printf("%*d%*d\n",m,m,n+1,n);
	return 0;
}
