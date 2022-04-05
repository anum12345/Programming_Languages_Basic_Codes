#include<stdio.h>
void add (int a,int b);
void sub (int a,int b);
void mul (int a,int b);
void div (float a,float b);

int main(void)
{
 add(5,6);
 sub(4,8);
 mul(7,8);
 div(8.0,9.0);
 return 0;
}
void add(int a,int b)
{
 
 printf("%d + %d =%d \n",a,b,a+b);
}
void sub(int a,int b)
{
 
 printf("%d - %d =%d \n",a,b,a-b);
}
void mul(int a,int b)
{
 
 printf("%d * %d =%d \n",a,b,a*b);
}
void div(float a,float b)
{
 
 printf("%f / %f =%f \n",a,b,(a/b));
}
