#include<stdio.h>
int main()
{
    int n,i,sum;
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i++)

      //sum+=2*i-1;
      sum+=2*i;
      printf("sum is %d",sum);

      return 0;
}
