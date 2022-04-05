#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a number: ");
  scanf("%d",&a);
  b=a%2;
  if(b==0)
  {
  	printf("Input is even number");
  }
  else
  {
  	printf("Input is odd number");
  }
}
