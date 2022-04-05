int main()
{
    char a ;
    printf ("Enter any character: ");
    scanf("%c",&a);
    if((a>='a' && a<='z')||(a>='A' && a<='Z') )
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
