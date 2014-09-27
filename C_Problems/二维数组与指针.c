#include<stdio.h>
int main()
{
	int a[3][4]={	0,1,2,3,
					4,5,6,7,
					8,9,10,11,
				};
	int (*p)[4]=a;
	printf("%#x\n",a);
	printf("%d\n",*p[1]);	//4
	printf("%#x\n",*p);	//µÿ÷∑
	printf("%d\n",(*p)[1]);//1
	printf("%d\n",(*p+1)[1]);//2 
	
}
