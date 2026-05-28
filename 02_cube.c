

#include<stdio.h>

#include <stdio.h>

void cube(int *p)
{
    *p = (*p) * (*p) * (*p);
}

int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n][n];

    // Input array
    printf("\nEnter array elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cube(&a[i][j]);
        }
    }


    printf("\nCubes of all elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}