
#include <stdio.h>

int main()
{
    char a ;
    printf ("Enter any alphabet: ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {    
        printf("Its upper case is %c",a-32);
    }
    else if  (a>='A' && a<='Z')
    {
        printf("Its lowercase is %c",a+32);
    }
    return 0;
}
