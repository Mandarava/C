#include<stdio.h>
#include<ctype.h>
int main()
{	
	char ch;
	int count=0,count1=0;
	while((ch=getchar())!=EOF)
	if(isupper(ch))
	count++;
	else if(islower(ch))
	count1++;
	printf("upper:%d  lower:%d\n",count,count1);
	return 0;
}
