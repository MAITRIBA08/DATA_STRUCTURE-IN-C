#include <stdio.h>
#define SIZE 100

int stack[10];
int top=-1;

void push(int b)
{
    top++;
    stack[top]=b;
}

int pop()
{
    int v;
    v= stack[top];
    top--;
    return v;
}

int main()
{
    int b, p, i, val,mul=1;

    printf("Enter base: ");
    scanf("%d", &b);

    printf("Enter power value: ");
    scanf("%d", &p);


    for(i=1;i<=p;i++)
    {
        push(b);
    }

    for(i=1;i<=p;i++)
    {
        val=pop();
        mul=mul*val;
    }

    printf("power  is : %d ",mul);

    return 0;
}
