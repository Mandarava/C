#include<stdio.h>
#include<ctype.h>
int dest(char ch);
int main()
{	char ch;
	scanf("%c",&ch);
	printf("%d\n",dest(ch));
}
int dest(char ch)
{	
	if(isupper(ch))
	return ch - 'A' + 1;
	else if(islower(ch))
	return ch - 'a' + 1;	
	else
	return -1;
}
