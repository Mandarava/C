#include<stdio.h>
//a.基本工资
#define BASIC 10.00 //基本工资等级=BASIC美元/小时
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
 double hours,gross,tax;
 printf("input the work hours of a week:");
 scanf("%lf",&hours);
 if (hours > 40) hours = 40 + (hours - 40) * 1.5;
 gross = hours * BASIC;
 printf("gross income:\t\t%lf\n",gross);
 if (gross <= LIMIT1) tax = gross * RATE1;
 else if (gross <= LIMIT2) tax = LIMIT1 * RATE1 + (gross - LIMIT1) * RATE2;
 else tax = LIMIT1 * RATE1 + LIMIT2 * RATE2 + (gross - LIMIT1 - LIMIT2) * RATE3;
 printf("tax:\t\t\t%lf\n",tax);
 printf("net income:\t\t%lf\n",gross - tax);
 return(0);
}

