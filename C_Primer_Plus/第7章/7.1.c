#include<stdio.h>
int main()
{	char ch;
	int space=0,enter=0,others=0;
	while((ch=getchar())!='#')
	{	
		if(ch==' ')
		space++;
		else if (ch=='\n')
		enter++;
		else
		others++;
	} 
	printf("%d%4d%4d\n",space,enter,others);
}
		
