#include<stdio.h>
main()
{
    int i , rev=0 ,temp ;
    printf("enter a value :");
    scanf("%d",&i);
    while(i!=0)
    { 
        temp=i%10;
        rev=(rev*10)+temp;
        i=i/10;
        
    }
   printf("%d",rev);
}
