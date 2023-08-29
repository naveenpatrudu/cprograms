#include<stdio.h>
#include<string.h>
main()
{
    char a[100]="hello";
    int i;
    //printf("enter the text message:\n");
    //gets(a);
    for(i=0;a[i]!='\0';i++)
    {
       a[i]=a[i]-32;
    }
    printf("%s",a);
    
}

