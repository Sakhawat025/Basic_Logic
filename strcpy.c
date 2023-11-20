#include<stdio.h>
int main()
{
    char a[30]="Hossain",b[30]="Sakhawat";
    //printf("Enter two source string:");
    //scanf("%s %s",a,b);

    strcpy(a,b);
    printf("copied string= %s\n",b);
    printf("copied string= %s",a);

}
