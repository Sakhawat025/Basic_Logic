/* write a program to check whether a
given Even or odd.*/

#include<stdio.h>
int main()
{
    /* int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even");
    }else printf("Odd");

    return 0;
    */

    /* without using moduls(%)*/

    /*int n;
    scanf("%d",&n);

    if(n/2*2==n)
    {
        printf("Even");
    }else printf("Odd");

    return 0;
    */

    /*using Bitwise operator(&)*/

    int n;
    scanf("%d",&n);

    if(n&1)
    {
        printf("Odd");
    }else printf("Even");

    return 0;

}
