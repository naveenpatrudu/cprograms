#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter your choice : \n");
    scanf("%d",&a);
    switch(a)
    {
        case 1 :
        printf("you have choosen idle \n ");
        printf("how many plates you want : \n");
        scanf("%d",&b);
        c = b * 30 ;
        printf("your bill is %d rs " , c);
       break;
       case 2 :
        printf("you have choosen dosa \n ");
        printf("how many plates you want : \n");
        scanf("%d",&b);
        c = b * 40 ;
        printf("your bill is %d rs " , c);
       break;
       case 3 :
        printf("you have choosen puri \n ");
        printf("how many plates you want : \n");
        scanf("%d",&b);
        c = b * 50 ;
        printf("your bill is %d rs " , c);
       break;
       case 4 :
        printf("you have choosen chapati \n ");
        printf("how many plates you want : \n");
        scanf("%d",&b);
        c = b * 60 ;
        printf("your bill is %d rs " , c);
        case 5:
        printf("you have choosen vada \n ");
        printf("how many plates you want : \n");
        scanf("%d",&b);
        c = b * 30 ;
        printf("your bill is %d rs " , c);
       break;
       default:
       printf("enter 1 to 5 ");
       break ;
    }
}
