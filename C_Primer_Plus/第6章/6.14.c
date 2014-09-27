#include<stdio.h>
#define LENGTH 20

int main(void)
{
 char a[255];
 int i;
 for(i=0;i<LENGTH;i++)
  scanf("%c",&a[i]);
 for(i=LENGTH-1;i>=0;i--)
  printf("%c",a[i]);
 printf("\n");
 return(0);
}

