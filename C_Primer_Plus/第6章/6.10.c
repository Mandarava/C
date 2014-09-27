#include<stdio.h>
int main()
{	int A[10];
	printf("please input 8 numbers\n");
	for(int i=0;i<8;i++)
	scanf("%d",&A[i]);
	for(int i=7;i>=0;i--)
	printf("%d ",A[i]);
	printf("\n");
}
