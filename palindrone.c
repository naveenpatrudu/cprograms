#include<stdio.h>
main()
{
    int i , rev=0 ,temp ,a ;
    printf("enter a value :");
    scanf("%d",&i);
    a=i;
    while(i!=0)
    { 
        
        temp=i%10;
        rev=(rev*10)+temp;
        i=i/10;
        
    }
    printf("%d",i);
    if(a == rev)
    {
   printf("its  a palendrone ");
    }
    else
    {
        printf("its not a palendrone ");
    }
}

