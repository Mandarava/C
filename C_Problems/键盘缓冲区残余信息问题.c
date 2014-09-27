//键盘缓冲区残余信息问题
#include<stdio.h>
int main(void)
{
	int i;
	char j[20];
	for(i=0;i<10;++i)
	scanf("%c",&j[i]);/*注意这里%前有个空格*/ //scanf  的格式控制串可以使用空白字符或其它非空白字符
	for(i=0;i<10;++i)
	printf("%c",j[i]);/*在输入十个字符之后，验证打印出来的字符是否是自己输入的最后一个字符（即输入的第十个字符）*/
	return 0;
}

/*
#include<stdio.h>
int main(void)
{
	int a;
	char c;
	while(c!='N')
	{
	scanf("%d",&a);
	//fflush(stdin); 				//清空输入缓冲区
	scanf("%c",&c);
	//fflush(stdin);
	printf("a=%dc=%c\n",a,c);
	}
return 0;
}
*/
