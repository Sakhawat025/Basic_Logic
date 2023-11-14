//C program to print number pattern

#include <stdio.h>

int main()
{
    int rows, cols, i, j, k;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows,&cols);

    k = 1;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++, k++)
        {
            printf("%-3d", k);
        }

        printf("\n");
    }

    return 0;
}

/*  output

1  2  3  4  5
6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25    */

