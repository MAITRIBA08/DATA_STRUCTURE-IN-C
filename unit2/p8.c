#include <stdio.h>

int stack[100], top = -1;
int min, max;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

void find(int n)
{
    if (top < 0)
        return;

    int x = pop();

    if (x < min) min = x;
    if (x > max) max = x;

    find(n - 1);
}

int main()
{
    int n, i, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        push(a[i]);
    }

    min = max = a[0];

    find(n);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
