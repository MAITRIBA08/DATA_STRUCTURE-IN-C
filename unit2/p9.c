#include<stdio.h>
#define MAX 10

int queue[MAX-1];
int rear=-1,front=-1;

void insert()
{
    int val;
        if(rear==MAX-1)
        {
            printf("queue overflow.\n");
        }
        else
        {
            if(front==-1)
                front=0;
            printf("enter element:");
            scanf("%d",&val);
            rear++;
            queue[rear]=val;
            printf("inserted successfully\n",val);
        }
}
void delete()
{
    int val;
    if(front==-1||front>rear)
        {
            printf("queue underflow\n");
        }
        else
        {
            printf("delete element is:%d\n",queue[front]);
            front++;
            if(front>rear)
            {
                front=front=-1;
            }
        }
}

void display()
    {
        int i;

        if(front==-1)
        {
            printf("\nstack is empty.\n");
        }
        else
        {
            printf("\nstack element are:\n");

            for(i=front;i<=rear;i++)
            {
                printf("%d\n",queue[i]);
            }
        }
    }
    void main()
   {
       int choice;
       while(1)
       {
           printf("\n------STACK MENU----\n");
           printf("1.insert\n");
           printf("2.delete\n");
           printf("3.display\n");
           printf("4.exit\n");

           printf("enter your choice:");
           scanf("%d",&choice);

           switch(choice)
        {


            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;

            case 4:
                printf("program terminated.\n");
                exit(0);
                break;
               printf("invalid choice! please enter 3 valid option \n");
        }
       }

   }
