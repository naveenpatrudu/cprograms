#include<stdio.h>
main()
{
    int num,i,count=0,a;
    printf("enter number ");
    scanf("%d",&num);
    a = num;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
        count++;
        }
    }
    if(count==2)
    {
        printf("prime");
    }
    else if ( a == 1 )
    {
        printf(" its a prime");
    }
    else 
    {
        printf("not prime");
    }
}


