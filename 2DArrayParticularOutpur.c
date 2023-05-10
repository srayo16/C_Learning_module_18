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
    int wr, wc;
    printf("Which row and column are you want to print: ");
    scanf("%d %d", &wr, &wc);

    for (int j = 0; j < c; j++)
    {
        printf("%d ", arr[wr - 1][j]);
    }
    printf("\n");
    printf("%d ", arr[wr - 1][wc - 1]);

    return 0;
}