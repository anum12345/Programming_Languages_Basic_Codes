#include <stdio.h>

int main()
{
    char a ;
    printf ("Enter any character: ");
    scanf("%c",&a);
    if(a=='a' || a=='b' || a=='c' || a=='d'  || a=='e' || a=='e' || a=='f'|| a=='g' || a=='h' || a=='i' || a=='j' || a=='k' || a=='l' || a=='m'
       || a=='n' || a=='o' || a=='p' || a=='q' || a=='r'  || a=='s'  || a=='t'|| a=='u'  || a=='v' || a=='w' || a=='x'  || a=='y' || a=='z' || a=='A' 
       || a=='B' || a=='C' || a=='D' || a=='E' || a=='F' || a=='G' || a=='H'|| a=='I' || a=='J' || a=='L' || a=='M' || a=='N' || a=='O' || a=='P'
       || a=='Q' || a=='R' || a=='S' || a=='T' || a=='U' || a=='V' || a=='W' || a=='X' || a=='Y' || a=='z')
    {
        printf("Input character is alphabet");
    }
    else if( a=='0' || a=='1'  || a=='2' || a=='3' || a=='4' || a=='5' || a=='6' || a=='7'|| a=='8' || a=='9')
    {
        printf("Input character is number");
    }
    else
    {
        
        printf("Input character is special character");
    }

    return 0;
}
