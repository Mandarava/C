#include<stdio.h>
#define min 60
int main(void)
{	int t;
	scanf("%d",&t);
	while(t>0)
	{
		printf("%d hours and %d minutes\n",t/min,t%min);
		scanf("%d",&t);
	}
	return 0;
}
		
