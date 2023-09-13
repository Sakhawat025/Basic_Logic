#include<stdio.h>
int main()
{
    /*using 3 variable
    int a,b,c;
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("The numbers swapping is %d and %d",a,b);
    */

    /*using 2 variable and addition and subtraction */

    /*int a,b;
    scanf("%d%d",&a,&b);

      a=a+b;
      b=a-b;
      a=a-b;

      printf("The swapping numbers is %d %d",a,b);

      return 0;
      */

      /*using 2 variable with multiplication and division  */

     /* int a,b;
      scanf("%d%d",&a,&b);

      a=a*b;
      b=a/b;
      a=a/b;

      printf("The swapping numbers is %d %d",a,b);

      return 0;
      */

      /*using 2 variable with Bitwise operator (^_XOR) */

      /*int a,b;

      scanf("%d%d",&a,&b);

      a=a^b;
      b=a^b;
      a=a^b;

      printf("The swapping numbers is %d %d",a,b);

      return 0;
      */

      /* single line in 2 variable in swapping*/

      int a,b;
      scanf("%d%d",&a,&b);

      b=(a+b)-(a=b);

      printf("The swapping numbers is %d %d",a,b);

      return 0;
}
