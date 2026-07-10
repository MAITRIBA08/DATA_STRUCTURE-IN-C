#include<stdio.h>

int main()
{
    int A[3]={1,2,3},
        B[3]={4,5,6},
        C[6],
        i;

    for(i=0;i<3;i++)
    {
        C[i]=A[i];
    }

    for(i=0;i<3;i++)
    {
        C[i+3]=B[i];
    }

    printf("Merged ARRAY C: ");
    for(i=0;i<6;i++)
    {
        printf("%d",C[i]);
    }

    return 0;
}

