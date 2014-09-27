#include<stdio.h>
int main()
{	char name[20];
	float height; 
	printf("please input your height by inches\n");
	scanf("%f",&height);
	printf("Please input your name\n");
	scanf("%s",name);
	printf("%s,you are %.3f feet tall\n",name,height/12);
}
