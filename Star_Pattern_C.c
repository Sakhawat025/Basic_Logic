#include<stdio.h>
int main()
{
    for(int i=1; i<=3; ++i)
    {
        for(int j=1; j<=5; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    /*Output: *****
              *****
              ***** */

    for(int i=1; i<=5; ++i)
    {
        for(int j=1; j<=5; ++j)
        {
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    /*output: *
              **
              ***
              ****
              ******/


    for(int i=1; i<=5; ++i)
    {
        for(int j=1; j<=5; ++j)
        {
            if(j>=6-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

     /*output:  *
                **
                ***
                ****
                ***** */


    for(int i=1; i<=5; ++i)
    {
        for(int j=1; j<=9; ++j)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    /*Output:       *
                   ***
                  *****
                 *******
                *********  */


    int k;
    for(int i=1; i<=5; ++i)
    {
        k=1;
        for(int j=1; j<=9; ++j)
        {
            if(j>=6-i && j<=4+i && k)
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    printf("\n");


    /* Output:      *
                   * *
                  * * *
                 * * * *
                * * * * *  */


}
