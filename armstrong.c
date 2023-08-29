#include<stdio.h>
main()
{
    int i , rev=0 ,temp ,a ,arm;
    printf("enter a value :");
    scanf("%d",&i);
    a=i;
    while(i!=0)
    { 
        temp=i%10;
        arm=arm+temp*temp*temp;
        i=i/10;
        
    }
    if (a == arm)
    {
        printf("its a armstrong");
    }
    else
    {
        printf("its not a armstrong");
    }
}
