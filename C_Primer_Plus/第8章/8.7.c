#include<stdio.h>
#include<ctype.h>
char get_first(void);

//b.加班
#define TIME 40  //加班（超过TIME小时） =
#define ADD  1.5  //ADD倍的时间
//c.税率
#define LIMIT1 300  //前LIMIT1美元为RATE1
#define RATE1 0.15 
#define LIMIT2 150  //下一个LIMIT2美元为RATE2
#define RATE2 0.20
#define RATE3 0.25 //余下的位RATE3

int main(void)
{
	double basic,hours,gross,tax;
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr\t\t\t2) $9.33/hr\n");
	printf("3) $10.00/hr\t\t\t4) $11.20/hr\n");
	printf("5) quit\n");
	switch( get_first() )
	{
		case '1': basic = 8.75; break;
		case '2': basic = 9.33; break;
		case '3': basic = 10.00; break;
		case '4': basic = 11.20; break;
		default: printf("quit\n"); return(0); //退出程序
	}
	printf("you have select $%.2lf\n",basic);
	printf("input the work hours of a week:");
	scanf("%lf",&hours);
	if (hours > 40) hours = 40 + (hours - 40) * 1.5;
	gross = hours * basic;
	printf("gross income:\t\t%lf\n",gross);
	if (gross <= LIMIT1) 
	tax = gross * RATE1;
	else if (gross <= LIMIT2) tax = LIMIT1 * RATE1 + (gross - LIMIT1) * RATE2;
	else tax = LIMIT1 * RATE1 + LIMIT2 * RATE2 + (gross - LIMIT1 - LIMIT2) * RATE3;
	printf("tax:\t\t\t%lf\n",tax);
	printf("net income:\t\t%lf\n",gross - tax);
	return(0);
}

char get_first(void) //得到字符串中的第一个非空字符
{
	int ch;
	while( isspace( ch = getchar() ) );
	while ( getchar() != '\n');
	return ch;
}

