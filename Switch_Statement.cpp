#include<bits/stdc++.h>
using namespace std;

// C Program to illustrate the use of switch statement
int main()
{
    int num=77;

    switch(num)
    {
    case 1:
        cout << "Case 1 is executed";
    case 2:
        cout << "Case 2 is executed";
    default:
        cout << "Default Case is executed";
        break;
    }

    return 0;
}
