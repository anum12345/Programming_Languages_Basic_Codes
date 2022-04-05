#include<stdio.h>
int main()
{
 int a[4];
 int sum=0;
 for(int i=0;i<=3;i++)
 {
 	 printf("Enter values of array a%d ",i);
	 scanf("%d/n",&a[i]);
	 sum=sum+a[i];
 }
  printf("SUM of array is %d",sum);
}
