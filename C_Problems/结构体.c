#include<stdio.h>
#include<string.h>
struct Student
{
	int age;
	char sex;
	char name[20];
};
int main()
{	
	struct Student st;			//����ָ�� 
	struct Student *pst=&st;
	pst->age=20;
	strcpy(pst->name,"ZhangSan");
	pst->sex='F';
	printf("%d\n%c\n%s\n",pst->age,pst->sex,st.name); //st.name  pst->name �ȼ� 
	return 0;	
	
}
