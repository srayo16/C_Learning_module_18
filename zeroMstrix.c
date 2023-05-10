#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int r, c;
    printf("Enter row and col: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 0)
            {
                count += 1;
            }
            // printf("%d ", arr[i][j]);
        }
        // printf("\n");
    }
    if (count == (r * c))
    {
        printf("Zero Matrix\n");
    }
    else
    {
        printf("Not Zero Matrix\n");
    }
    // printf("%d", count);

    return 0;
}