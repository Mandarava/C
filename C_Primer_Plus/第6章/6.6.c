#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20];
	printf("please enter a letter\n");
	scanf("%s",a);
	for(int i=strlen(a)-1;i>=0;i--)
		printf("%c",a[i]);
}
