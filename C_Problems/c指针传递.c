#include<stdio.h>
void f(int **p)
{	int i=5;
	*p=&i;
}
int main()
{
	int i=10;
	int *p=&i;
	printf("%#x\n",p);
	f(&p);
	printf("%d\n",*p);
	printf("%#x\n",p);
	return 0;
}

/*果要修改传入的指针所指向的地址，例如new操作，要用**，也就是指向指针的指针
，如果只是修改传入指针所指向的地址所对应的内存里面的值，才能直接传入指针*/
