#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30]="Den";
    char s2[30]="Maak";
    strncat(s1,s2,2);
    printf("%s",s1);
    return 0;
}
