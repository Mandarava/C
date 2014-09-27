#include<stdio.h>
void Temperatures(double);
int main(void)
{
 double Fahrenheit;
 printf("Please input the Fahrenheit:");
 while(scanf("%lf",&Fahrenheit) == 1) 
 {
  Temperatures(Fahrenheit);
  printf("Please input the Fahrenheit:");
 }
 printf("end\n");
 return(0);
}

void Temperatures(double Fahrenheit)
{
 const double a=1.8,b=32.0,c=273.16;
 printf("Fahrenheit = %lf\t",Fahrenheit);
 printf("Celsius = %lf\t",a * Fahrenheit + b);
 printf("Kelvin = %lf\n",a * Fahrenheit + b + c);
}

