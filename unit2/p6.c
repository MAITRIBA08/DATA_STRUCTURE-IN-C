#include <stdio.h>

int main() {
    int i,a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i=0;i<=b;i++)
    {
        i = b;
        b = a % b;
        a = i;
    }

    printf("GCD = %d\n", a);

    return 0;
}
