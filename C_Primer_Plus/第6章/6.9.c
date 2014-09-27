#include<stdio.h>
int main()
{	int lower,upper;
	printf("please enter lower and upper integer limits\n");
	scanf("%d",&lower);
	scanf("%d",&upper);
	while(lower<=upper)
	{	int i;
		int sum=0;
		for(i=lower;i<=upper;i++)
		sum=i*i+sum;
		printf("The sums of the squares from %d to %d is %d\n",lower*lower,upper*upper,sum);
		printf("Enter next set of limits:");
  		scanf("%d%d",&lower,&upper);
	}
	printf("Done\n");
}
	
