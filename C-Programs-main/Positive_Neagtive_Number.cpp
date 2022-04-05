#include<stdio.h>
int main()
{
 int a;
 printf("Enter a number:");
 scanf("%d",&a);
 if(a>0)
 {
   printf("a is Positive"); 
 }
 else if(a<0)
 {
   printf("a is negative"); 
 }
 else if(a==0)
 {
  printf("a is 0");
 }
}
