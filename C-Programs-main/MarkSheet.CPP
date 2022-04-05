#include<stdio.h>
int main()
{
  printf("\t\t\t\t\tMARKSHEET");
  printf("\nNAME:ANUM");
  printf("\nSECTION:A");
  printf("\nINSTITUTE:NAVTCC");
  float p,c,b,a,t;
  printf("\nEnter marks of Python: ");
  scanf("%f",&p);
  printf("\nEnter marks of C_Language: ");
  scanf("%f",&c);
  printf("\nEnter MArks of BE: ");
  scanf("%f",&b);
  printf("\nEnter Marks of Ardruino: ");
  scanf("%f",&a);
  t=p+c+b+a;
  float A,P;
  A=t/4;
  P=(t/400)*100;
  printf("\nAverage : %f ",A);
  printf("\nPercentage : %f ",P);
  if (P>90)
  {
   printf("\nGrade : A");
 }
  else if(P>80)
   {
   printf("\nGrade : B");
 }
  else if(P>70)
   {
   printf("\nGrade : C");
 }
  else if(P>60)
   {
   printf("\nGrade : D");
 }
  else if(P<60)
   {
   printf("\nGRADE : Fail");
 }
  
  }
