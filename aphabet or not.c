#include<stdio.h>
main()
{
    char a ;
    printf("enter a values : \n");
    scanf("%c",&a);
    if((a >= 'a' && a<= 'z' )|| (a >= 'A' && a <= 'Z') )
    {
        printf("ALphabet");
    }
    else if( a >= '0' && a <= '9' )
    {
        printf ("its a number");
    }
    else
    {
       printf("its a special charecter");
    }
    }

