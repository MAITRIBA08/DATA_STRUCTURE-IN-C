#include <stdio.h>

int main()
{
    int n, i, fact = 1, stack[100], top = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Push numbers into stack
    for(i = 1; i <= n; i++)
        stack[++top] = i;

    // Pop and multiply
    while(top != -1)
        fact = fact * stack[top--];

    printf("Factorial = %d", fact);

    return 0;
}
