#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    int i,count=0;
    printf("enter the text message:\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            count++;
           
        }
    }
    count=count+1;
    printf("%d",count);
    
}

