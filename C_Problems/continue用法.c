#include<stdio.h>
int main()
{	char a,b;
	scanf("%c",&a);
	printf("%c\n",a);
	
	while((a=getchar())!='\n')   //ÌÞ³ýÀ¬»øÖµ  while(getchar()!='\n')
		continue;	
	
	scanf("%c",&b);
	printf("%c",b);
	return 0;
}
