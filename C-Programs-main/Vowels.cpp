
#include <stdio.h>

int main()
{
    char a ;
    printf ("Enter any alphabet: ");
    scanf("%c",&a);
    switch(a)
    {
        case('a'):
        printf("Input alphabet is vowel");
        break;
        case('e'):
        printf("Input alphabet is vowel");
        break;
        case('i'):
        printf("Input alphabet is vowel");
        break;
        case('o'):
        printf("Input alphabet is vowel");
        break;
        case('u'):
        printf("Input alphabet is vowel");
        break;
        default:
        printf("Input alphbet is consonants");
    }
    return 0;
}
