//first metod
#include<stdio.h>
int main()
{
 int a[5]={1,2,3,4,5};
 int b[5]={6,7,8,9,10};
 int c[10];
 int j=0;
 for(int i=0;i<=9;i++)
 {
  if(i<=4)
  {
     c[i]=a[i];
 }
 else if(i>4 )
 {
   
   c[i]=b[j];
   j++;
 }
 
 }
  for(int i=0;i<=9;i++)
   {
   printf("c%d is %d\n",i,c[i]);
}
 
}
//seconf method
#include<stdio.h>
int main()
{
 int a[5]={1,2,3,4,5};
 int b[5]={6,7,8,9,10};
 int c[10];
 int j=0;
 for(int i=0;i<=9;i++)
 {
  if(i<=4)
  {
     c[i]=a[i];
 }
 else if(i>4 )
 {
   
   c[i]=b[j];
   j++;
 }
 
 }
  for(int i=0;i<=9;i++)
   {
   printf("c%d is %d\n",i,c[i]);
}
 
}
