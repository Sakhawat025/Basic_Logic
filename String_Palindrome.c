#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],s1[20];
    printf("Enter the string.\n");
    gets(s);

    strcpy(s1,s);
    strrev(s1);

    if(strcmp(s,s1)==0){
        printf("Palindrome.\n");
    }else
    {
        printf("Not Palindrome.\n");
    }

    return 0;
}

