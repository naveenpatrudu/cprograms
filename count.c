#include<stdio.h>
main()
{
    int i , rev=0 ,temp ,a ,count =0;
    printf("enter a value :");
    scanf("%d",&i);
    a=i;
    while(i!=0)
    { 
        
        temp=i%10;
        i=i/10;
        count++;
        
    }
    printf("%d",count);
}
