#include<stdio.h>
#include<string.h>
int main()
{
    char a[50]="Hello ";
    char b[20]="Good Morning";
    strcat(a,b);
    printf("concatenated string = %s",a);
    getch();
}
