#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the value of angle :");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("its an triangle");
    }
    else
    {
        printf("its not a triangle");
    }
}
