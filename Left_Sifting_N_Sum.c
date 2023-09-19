/* Left shifting Binary Number
 condition and sum Number.*/

#include<stdio.h>
int main()
{
    int x=1,a,s;
    for(s=0,a=5;a;x<<=1,a--)  // Using Binary Number.
    {
        s+=x;
    }
    printf("%d",s);
    return 0;       // output : 31
}
