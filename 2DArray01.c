#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int r, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    int n = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("arr[%d][%d] = %d ", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}