#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};


struct Node *start = NULL;


void create_list()
{
    int n, i;
    struct Node *newnode, *ptr;


    printf("Enter number of nodes: ");
    scanf("%d", &n);


    if (n <= 0)
    {
        printf("Invalid number of nodes.\n");
        return;
    }


    start = NULL;


    for (i = 1; i <= n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));


        if (newnode == NULL)
        {
            printf("Memory allocation failed.\n");
            return;
        }


        printf("Enter value for node %d: ", i);
        scanf("%d", &newnode->data);


        newnode->next = NULL;


        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            ptr = start;


            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }


            ptr->next = newnode;
        }
    }


    printf("Linked list created successfully.\n");
}


void delete_specific()
{
    struct Node *ptr, *preptr;
    int value;


    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }


    printf("Enter the value to delete: ");
    scanf("%d", &value);


    ptr = start;


    if (ptr->data == value)
    {
        start = ptr->next;
        free(ptr);


        printf("%d deleted successfully.\n", value);
        return;
    }


    preptr = ptr;
    ptr = ptr->next;


    while (ptr != NULL && ptr->data != value)
    {
        preptr = ptr;
        ptr = ptr->next;
    }


    if (ptr == NULL)
    {
        printf("%d not found in the list.\n", value);
        return;
    }


    preptr->next = ptr->next;
    free(ptr);


    printf("%d deleted successfully.\n", value);
}


void display()
{
    struct Node *ptr;


    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }


    ptr = start;


    printf("Linked List: ");


    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }


    printf("NULL\n");
}


int main()
{
    int ch;


    while (1)
    {
        printf("\n----- Singly Linked List -----\n");
        printf("1. Create linked list\n");
        printf("2. Delete specific node\n");
        printf("3. Display\n");
        printf("4. Exit\n");


        printf("Enter your choice: ");
        scanf("%d", &ch);


        switch (ch)
        {
            case 1:
                create_list();
                break;


            case 2:
                delete_specific();
                break;


            case 3:
                display();
                break;


            case 4:
                exit(0);


            default:
                printf("Wrong choice!\n");
        }
    }


    return 0;
}
