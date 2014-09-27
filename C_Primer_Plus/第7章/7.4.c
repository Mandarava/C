#include<stdio.h>
int main()
{
	char ch;
	int count=0,count1=0;
	while((ch=getchar())!='#')
	{
		if(ch=='.')
		{
		ch='!';
		putchar(ch);
		count++;
		}
		else if(ch=='!')
		{
			putchar(ch);
			putchar(ch);
			count1++;
		}
		else
		putchar(ch);
	}
	printf("\n%d times ! \n%d times !!\n",count,count1);
}
