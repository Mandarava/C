#include<stdio.h>
double f(int n)
{	
	if(n==0) return 1;
	else
	return n*f(n-1);	
}
int main()
{
	double sum=0.0;
	for(int i=0;i<30;i++)
	sum+=f(i+1);
	printf("%.2e\n",sum);		
}
