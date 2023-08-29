#include<stdio.h>
main()
{
    int a[5]={1,2,3,4,5},i,j,c;
    for (i=0,j=4 ;i<=j;i++,j--)
    {
        
        c=a[i];
     
        a[i]=a[j];
       
        a[j]=c;
        
       
    }
  for(i=0;i<5;i++)
  {
       printf("%d",a[i]);
  }
   
   
}
