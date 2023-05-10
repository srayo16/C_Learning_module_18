#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int r, c;
    printf("Enter row and col: ");
    scanf("%d %d", &r, &c);

    if (r == c)
    {
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
                if (i == j)
                {
                    if (arr[i][j] != arr[0][0])
                    {
                        count = 1;
                    }
                }
                else if (i != j)
                {
                    if (arr[i][j] != 0)
                    {
                        count = 1;
                    }
                }
            }
        }
        if (count == 1)
        {
            printf("It's not a scalar matrix\n");
        }
        else
        {
            printf("It's a scalar matrix\n");
        }
    }
    else
    {
        printf("Square are required!");
    }

    return 0;
}