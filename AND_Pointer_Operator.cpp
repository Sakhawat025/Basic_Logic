#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int*y;
    int z;

    // & Operator.
    y=&x;

    // *Operator.
    z=*y;

    cout << "x= " << x <<endl;
    cout << "y= " << y <<endl;
    cout << "z= " << z <<endl;

    return 0;
}

