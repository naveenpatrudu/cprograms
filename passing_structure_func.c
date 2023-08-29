#include<stdio.h>
struct student
{
    int roll;
    int marks;
    char name[10];
};
void fun(struct student obj);
struct student obj;

int main()
{
    int a;
    obj.marks = 10;
    fun(obj);
}
void fun(struct student obj)
{
    printf("%d",obj.marks);
}
