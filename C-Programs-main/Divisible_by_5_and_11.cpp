#include <stdio.h>

int main()
{
    int a ;
    printf ("Enter any number: ");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("Given number is divisible by 5");
    }
    if(a%11==0)
    {
        printf("Given number is divisible by 11");
    }
    return 0;
}
