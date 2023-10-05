#include<stdio.h>
int main()
{
   int i=1, num,sum=0;
   printf("Enter a number:");
   scanf("%d",&num);
   while(i<num)
   {
       if(num%i==0)
        sum=sum+i;
       i++;
   }if(sum==num)
   {
   printf("%d is Perfect Number",num);
   }else{
   printf("%d is Not Perfect Number",num);
   }

   return 0;
}
