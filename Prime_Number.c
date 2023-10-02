#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s;
    printf("Enter a number:");
    scanf("%d",&n);

    // One way solve.

    /*for(i=2; i<n; ++i)
    {
        if(n%i==0)
        {
          break;
        }
    }
    if(i==n)
    {
        printf("Prime_Number\n");
    }
    else
        printf("Not_Prime_Number\n");*/

    // Another Way.


    /*for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
          break;
        }
    }
    if(i==n/2+1)
    {
        printf("Prime_Number\n");
    }
    else
        printf("Not_Prime_Number\n");*/


    // Other way.

    s=sqrt(n);
    for(i=2; i<=s; ++i)
    {
        if(n%i==0)
        {
          break;
        }
    }
    if(i==s+1)
    {
        printf("Prime_Number\n");
    }
    else
        printf("Not_Prime_Number\n");

    return 0;
}
