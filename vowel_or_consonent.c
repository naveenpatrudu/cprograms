#include<stdio.h>
main()
{
    char a ;
    printf("enter a values : \n");
    scanf("%c",&a);
    if((a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') || ( a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') )
    {
          printf("vowel");
    }
   else
    {
       printf("its a consonent");
    }
    }

