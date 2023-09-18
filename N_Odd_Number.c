/* Write a program to print
N odd natural number.*/


#include<stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        {
            continue;
        }else printf("%d ",i);
    }
    return 0;

    // write a program to print first N odd numbers.

    /*int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
    }
    return 0;*/
}
