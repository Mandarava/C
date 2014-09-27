#include<stdio.h>
int main()
{
	int a=10;
	do
	{
		if(a%42==0)
		printf("%d\n",a);
		a++;
	}while(a<=1000)	;	
	
}
