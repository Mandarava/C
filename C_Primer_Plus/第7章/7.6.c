#include<stdio.h>
int main()
{
	char ch=0;
	char next;
	int count=0;
	while((next=getchar())!='#')
	{
		if((ch=='e')&&(next=='i'))
		count++;
		ch=next;
	}
	printf("%d\n",count);
}
		
