#include<stdio.h>
#include<math.h>
int main()
{	int i;
	int A[8];
	for(i=0;i<8;i++)
		A[i]=pow(2,i);
	i=0;
	do{
		printf("%d  ",A[i]);		
	}while(++i<8);
}
