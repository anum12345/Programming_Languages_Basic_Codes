#include<stdio.h>
int main()
{
 int a[4];
 int count=0;
 for(int i=0;i<=3;i++)
 {
 	 printf("Enter values of array a%d ",i);
	 scanf("%d/n",&a[i]);
	 if(a[i]%2==0)
	 {
	  count++;
	 }
	 }
	  printf("Even Number is %d",count);
	 }
 
