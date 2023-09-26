#include <stdio.h>
#include <math.h>

int main()
{
    int n, num=0, digit, sum, originalNum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d Armstrong numbers are:\n", n);

    while (n!=0)
    {
        originalNum = num;
        sum = 0;

        while (originalNum != 0)
        {
            digit = originalNum % 10;
            sum += pow(digit, 3);
            originalNum /= 10;
        }

        if (sum == num)
        {
            printf("%d\n", num);
            n--;
        }

        num++;
    }

    return 0;
}
