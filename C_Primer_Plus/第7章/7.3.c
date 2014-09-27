#include<stdio.h>
int main()
{
	int ch;
	int odd_sum=0,odd_avg=0,odd_count=0,even_count=0,even_sum=0,even_avg=0;
	while(scanf("%d",&ch)==1)
	{	if (ch==0) break;
		else if(ch%2==0)	
		{
			odd_count++;
			odd_sum+=ch;
			odd_avg=odd_sum/odd_count;
		}
		else
		{
			even_count++;
			even_sum+=ch;
			even_avg=even_sum/even_count;
		}
	}
	printf("%d%3d\n",odd_count,odd_avg);
	printf("%d%3d\n",even_count,even_avg);
}
