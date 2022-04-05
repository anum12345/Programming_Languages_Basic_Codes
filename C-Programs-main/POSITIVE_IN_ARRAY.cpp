#include<stdio.h>
int main()
{
 int a[5];
 int count=0;
 for(int i=0;i<=4;i++)
 {
   	 printf("Enter values of array a%d ",i);
	 scanf("%d/n",&a[i]);
	 if(a[i]>=0)
	 {
	   count++;
	 }
 }
 printf("Total positive number is %d",count);
}
