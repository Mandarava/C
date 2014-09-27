//给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字
//哈姆雷特：数字还是字符？这是一个问题！
#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i;
    char s[20];
    scanf("%d", &n);
    sprintf(s,"%d", n);				//输出到字符串 
    printf("%d\n",strlen(s));		//几位数 
    for(i=0;i<strlen(s);i++){		//输出每个数字 
    	if(i!=strlen(s)-1)//最后一个数不输出空格
        printf("%c ",s[i]);
        else
        printf("%c",s[i]);
    }
    printf("\n");
   
    for(i=strlen(s)-1;i>=0;i--){     //逆序输出 
       					 
	    printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
