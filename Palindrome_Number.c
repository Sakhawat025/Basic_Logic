#include<stdio.h>
int main()
{
    int number,a=0,r,Temp;
    printf("\nEnter a Number:");
    scanf("%d",&number);

    Temp=number;
    while(number !=0)
    {
        r=number%10;
        a=a*10+r;
        number=number/10;
    }
    if(Temp==a)
    {
        printf("\nPalindrome");
    }else
    {
        printf("\nNot Palindrome");
    }

    return 0;

}
