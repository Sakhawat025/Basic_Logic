/* write a program to calculate
sum of first N natural number.*/


#include<stdio.h>
int main()
{
   /* int n,i,sum;
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i++)

        sum=sum+i;
        printf("sum is %d",sum);

    return 0;*/

    int i,n,sum;
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;sum=sum+i,i++);
    printf("Sum is %d",sum);
    return 0;

}
