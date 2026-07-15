#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[20];
};

void main()
{
    struct student s1;

    printf("\n Enter roll number: ");
    scanf("%d",&s1.rollno);

    printf("\n Enter name: ");
    scanf("%s",s1.name);

    printf("\n student data is us follows");
    printf("\n **************************");

    printf("\n roll number is:%d",s1.rollno);

    printf("\n name is: %s",s1.name);

    getch();
}
