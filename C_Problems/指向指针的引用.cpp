#include<stdio.h>  
void ptrswap2(int *&v1,int *&v2)//指向指针的引用是某一指针的别名，同变量的引用一样，可以实现对传递给形参的实参数值的交换  
{  
    int *temp=v2;//指针别名，当然以指针的形式来应用  
    v2=v1;  
    v1=temp;  
}    
void ptrswap1(int *v1,int *v2)//利用指针进行数值交换，改变的只是形参的指向，实参的值保持不变；  
{  
    int *temp=v1;  
    v2=v1;  
    v1=temp;  
}    
int main()
{    
	int i=10;  
	int j=20;  
	int *pi=&i;  
	int *pj=&j;  
	printf("before swap using pointer as parameter: pi=%d  pj=%d\n",*pi,*pj);  
	ptrswap1(pi,pj);  
	printf("after swap using pointer as parameter, the value that pointer points to don't change:\n"); 
	printf("pi=%d  pj=%d\n",*pi,*pj);   
	int i2=10;  
	int j2=20;  
	int *pi2=&i2;  
	int *pj2=&j2;  
  	printf("before swap using Reference of pointer as parameter:: pi2=%d  pj2=%d\n",*pi2,*pj2);  
	ptrswap2(pi2,pj2);  
	printf("after swap, the value that pointer points to  changed: pi2=%d  pj2=%d\n",*pi2,*pj2);  

  
return 0;  
}
