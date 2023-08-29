#include<stdio.h>
#include<string.h>
main()
{
    char a[10]="naveen";
    int i,j,c;
    for(i=0,j=5;i<=j;i++,j--)
    {
        printf("\n");
        c=a[i];
        a[i]=a[j];
        a[j]=c;
        
    }
    printf("%s",a);
}
