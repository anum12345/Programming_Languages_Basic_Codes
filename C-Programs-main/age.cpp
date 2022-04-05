#include<stdio.h>
int age=21;
void month(int age);
void days(int age);
int main()
{
  month(age);
  days(age);
}
void month(int age)
{
  printf("Age in year is %d\n",age);
  printf("Age in month is %d\n",12*age);
}
void days(int age)
{
  printf("Age in days is %d",12*365*age);
}
