/* Reverse a given number.*/

#include<stdio.h>
int main()
{
    int n,x=0,y,count=0,lock=1;
    scanf("%d",&n);
    while(n>0)
    {
        y=n%10;
        if(y==0 && lock)
            count++;
            else lock=0;

        x=x*10+y;
        n=n/10;

    }
    while(count--)
        printf("%c",'0');
    printf("%d",x);

    return 0;

}
