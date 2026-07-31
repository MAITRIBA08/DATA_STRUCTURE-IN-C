#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char str[MAX];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i=0;i<strlen(str);i++)
    {
        push(str[i]);

    }

     printf("Reversed string: ");

   for(i=0;i<strlen(str);i++)
   {
        printf("%c", pop());
   }

    return 0;
}
