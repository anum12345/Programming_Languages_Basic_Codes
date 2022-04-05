#include<stdio.h>
void power(int a,int b);
int main()
{
  
power(2,3);  //function calling
}
void power(int a,int b)
{
	int result=a;
	
  for(int i=1; i<=b-1; i++)
  {
  result = result * a;
  
  }
  
  printf("Power is:  %d", result);
 
}
