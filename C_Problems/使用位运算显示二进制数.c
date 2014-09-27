#include<stdio.h>
char * itobs(int, char *);
void show_bstr(const char *);

int main()
{
	char bin_str[8*sizeof(int)+1];	//一个int的位数。考虑到结尾的空字符，bin_str数组的元素个数为这个表达式的值再加1 
	int number;
	
	puts("Enter integers and see them in binary.");
	puts("Non-numeric input terminates program.");
	while(scanf("%d",&number)==1)
	{
		itobs(number,bin_str);
		printf("%d is ",number);
		show_bstr(bin_str);
		putchar('\n');
	}
	puts("Bye!");
	
	return 0;
}

char *itobs(int n,char *ps)
{
	int i;
	static int size =8*sizeof(int);
	
	for(i=size-1;i>=0;i--,n>>=1)
		ps[i]=(01&n) + '0';		/*01是一个掩码（&=）的八进制表示，该掩码除位0之外的所有位都设为0. 01&n 就是n的最后一位的值。
								该值为0或1，但是字符数组需要的是字符'0' 或'1'。对该值加上'0'的ASCII码可以完成转换。
								结果放置在数组的倒数第二个元素中（保留最后的元素存放空字符）*/
	ps[size]='\0';
	
	return ps;
}

/*四位一组显示二进制字符串*/
void show_bstr(const char *str) 
{
	int i=0;
	while(str[i])
	{
		putchar(str[i]);
		if(++i %4 == 0 && str[i])
		putchar(' ');
	}
}
