#include<stdio.h>
main()
{
    char a ;
    printf("enter a charecter : \n");
    scanf("%c",&a);
    if( a>= 'a' && a<= 'z' )
    {
        printf("its a lower case");
    }
    else
    {
        printf ("its a upper case");
    }
}

