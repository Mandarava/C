#include<stdio.h>
#include<string.h>
#include<ctype.h>
//���ܲ��� 
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

//���ܲ��� 
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
	puts("���������ģ�С��1024��Ӣ���ַ���");
	while(!k)
	{
		k=1;
		gets(Plaintext);
		while(strlen(Plaintext)>1024 || strlen(Plaintext)==0)
		{
			puts("��������Ĳ�����Ҫ������������:");	
			gets(Plaintext);
		}
		for(i=0;i<strlen(Plaintext);i++)
		{
			if(!isalpha(Plaintext[i]) )
			{
				k=0;
				puts("��������Ĳ�����Ҫ������������:");	
				break;
			}				
		}			
	}

	puts("���������루һλӢ���ַ���");
	scanf("%c",&KEY);
	while(!isalpha(KEY))
	{	
		fflush(stdin); 
		puts("��������벻����Ҫ������������");
		scanf("%c",&KEY);
	}
	key=toupper(KEY);
	Encrypt(Plaintext,key);
	printf("���ģ�");
	puts(Plaintext);
	Decrypt(Plaintext,key);
	printf("���ģ�");
	puts(Plaintext);
}