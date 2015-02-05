#include<stdio.h>
#include<string.h>
#include<ctype.h>
//加密操作 
void Encrypt(char Plaintext[],char key)
{
	int i;
	key-=65;
	for(i=0;i<strlen(Plaintext);i++)
	{
		if(isupper(Plaintext[i]))
		Plaintext[i]=((Plaintext[i]-65+key)%26+65);
		else
		Plaintext[i]=((Plaintext[i]-97+key)%26+97);	
	}
}

//解密操作 
void Decrypt(char Plaintext[],char key)
{
	int i;
	key-=65;
	for(i=0;i<strlen(Plaintext);i++)
	{		
		if(isupper(Plaintext[i]))		 
		Plaintext[i]=((Plaintext[i]-key-65+26)%26+65);
		else
		Plaintext[i]=((Plaintext[i]-key-97+26)%26+97);			
	}	
}

int main(void)
{
	int i,k=0;
	char key,KEY;
	char Plaintext[1024];
	puts("请输入明文（小于1024的英文字符）");
	while(!k)
	{
		k=1;
		gets(Plaintext);
		while(strlen(Plaintext)>1024 || strlen(Plaintext)==0)
		{
			puts("输入的明文不符合要求，请重新输入:");	
			gets(Plaintext);
		}
		for(i=0;i<strlen(Plaintext);i++)
		{
			if(!isalpha(Plaintext[i]) )
			{
				k=0;
				puts("输入的明文不符合要求，请重新输入:");	
				break;
			}				
		}			
	}

	puts("请输入密码（一位英文字符）");
	scanf("%c",&KEY);
	while(!isalpha(KEY))
	{	
		fflush(stdin); 
		puts("输入的密码不符合要求，请重新输入");
		scanf("%c",&KEY);
	}
	key=toupper(KEY);
	Encrypt(Plaintext,key);
	printf("密文：");
	puts(Plaintext);
	Decrypt(Plaintext,key);
	printf("明文：");
	puts(Plaintext);
}
