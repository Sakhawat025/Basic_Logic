/* Right >> shifting condition */

#include<stdio.h>
int main()
{
    int x=128;
    for(;x;x>>=1)  // Using binary Number.
        printf("%d",x);
    return 0;  //output : 1286432168421
}
