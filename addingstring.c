#include<stdio.h>
#include<string.h>
main()
{
    char a[100]="naveen",b[100]="patrudu";
    int i,len,j;
    len=strlen(a);
    for(i=0;b[i]!='\0';i++)
    {
     a[len+i]=b[i];
    }
    printf("%s",a);
}


