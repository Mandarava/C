#include<stdio.h>
int isprime(int);

int main(void)
{
 int num,i;
 printf("input a positive number:");
 scanf("%d",&num);
 printf("all the primes <= %d:\n",num);
 for(i=2;i<=num;i++)
  if( isprime(i) )
   printf("%d\t",i);
 printf("\n");
 return(0);
}

int isprime(int n)  //如果n是素数 返回1，反之 返回0
{
 int div;
 for(div = 2; div * div <= n; div++)
  if (n % div == 0)
   return 0;

 return 1;
}


