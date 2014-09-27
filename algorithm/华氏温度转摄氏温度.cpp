//输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9 输出要求有文字说明，取位2小数 
#include<stdio.h>
int main()
{	float c,f;

	scanf("%f",&f);
	c=(5.0/9)*(f-32);	//5.0/9=0.5555   5/9=0 隐式类型转换
	printf("c=%.2f\n",c);
	return 0;
}
