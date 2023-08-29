#include<stdio.h>
main()
{
    int b,n=125,i,c=0,j;
    int a[8]={0,0,0,0,0,0,0,0};
    for(i=0;n>0;i++)
    //while(n>=0)
    {
        c=n%2;
        a[i]=c;
       
        n=n/2;
    }
    for(j=i;j>=0;j--)
    {
     printf("%d",a[j]);
    }
}






