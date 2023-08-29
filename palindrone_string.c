#include<stdio.h>
#include<string.h>
main()
{
    char a[100],b[100];
    printf("enter the string :");
    gets(a);
    strcpy(b,a);
    int i,j,c,com,len;
    len = strlen(a);
   for(i=0,j=len-1;i<=j;i++,j--)
    {
       // printf("\n");
        c=a[i];
        a[i]=a[j];
        a[j]=c;
       // printf("\nreverse : %c",a[j]);
    }
    puts(a);
    //printf("\nreverse : %s",a);
    com=strcmp(a,b);
    printf("\nstrcmp(a,b) :%d\n",com);
    if(com == 0)
    {
        printf("its a palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    


}

