
#include <stdio.h>
#include <stdlib.h>

void star_set(char arr[][100], int row, int col, int x_star, int y_star)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            arr[i][j] = '0';
            if (i == x_star && j == y_star)
            {
                arr[i][j] = '*';
            }
            else if (i== x_star && j<y_star)
            {
                arr[i][j]='>';

            }
             else if (i== x_star && j>y_star)
            {
                arr[i][j]='<';

            }
             else if (i<x_star && j==y_star)
            {
                arr[i][j]='v';

            }
               else if (i>x_star && j==y_star)
            {
                arr[i][j]='^';

            }
               else if (i<x_star && j<y_star)
            {
                arr[i][j]='a';

            }
               else if (i<x_star && j>y_star)
            {
                arr[i][j]='b';

            }
                else if (i>x_star && j<y_star)
            {
                arr[i][j]='c';

            }
                   else if (i>x_star && j>y_star)
            {
                arr[i][j]='d';

            }
        }
    }
}

void star_print(char arr[][100], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    printf("==================================\n");
}

int main()
{
    char arr[100][100];
    int x, y, x_star, y_star;

    while (1)
    {
        printf("Enter dimensions (rows columns): \n");
        scanf("%d %d", &x, &y);
        printf("Enter coordinates for the star (row column): \n");
        scanf("%d %d", &x_star, &y_star);

        star_set(arr, x, y, x_star, y_star);
        star_print(arr, x, y);
    }

    return 0;
}