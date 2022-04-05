#include<stdio.h>
int main()
{
 int a,b,c,d,e;
 printf("Enter five numbers\n");
 scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
 if(a>b && a>c && a>d && a>e)
 {
  printf("\n%d is maximum",a);
 }
 else if(b>a && b>c && b>d && b>e)
 {
 	printf("\n%d is maximum",b);
 }
 else if(c>a && c>b && c>d && c>e)
 {
 	printf("\n%d is maximum",c);
 }
 else if(d>a && d>b && d>c && d>e)
 {
 	printf("\n%d is maximum",d);
 }
 else if(e>a && e>b && e>c && e>d)
 {
 	printf("\n%d is maximum",e);
 }
 if(a<b && a<c && a<d && a<e)
 {
  printf("\n%d is minimum",a);
 }
 else if(b<a && b<c && b<d && b<e)
 {
 	printf("\n%d is minimum",b);
 }
 else if(c<a && c<b && c<d && c<e)
 {
 	printf("\n%dc is minimum",c);
 }
 else if(d<a && d<b && d<c && d<e)
 {
 	printf("\n%d is minimum",d);
 }
 else if(e<a && e<b && e<c && e<d)
 {
 	printf("\n%d is minimum",e);
 }
 
}
