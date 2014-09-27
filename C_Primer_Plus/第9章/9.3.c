#include<stdio.h>
void show(char , int ,int);
int main()
{
	char ch;
	int x,y;
	scanf("%c",&ch);
	scanf("%d%d",&x,&y);
	show(ch,x,y);		
	return 0;	
}
void show(char ch,int x, int y)
{	int a=0;
	while(a++<=x)
	{
		for(int i=0;i<x;i++)
			printf("%c",ch);
	printf("\n");
	}
	
}
