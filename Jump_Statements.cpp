#include<bits/stdc++.h>
using namespace std;

// Break Statement.
/*int main()
{
    int a=10;
    for(int i=0;i<a;++i){
        cout << "Value of a: " << a << endl;
        a=a+1;
        if(a>15){
            break;
        }
    }

    return 0;
}*/

// Continue Statement.
/*int main()
{
    for(int i=71;i<=80;++i){
        if(i==74){
            continue;
        }else
        {
            cout << i << ",";        }
    }

    return 0;
}*/

// goto Statement.
/*void P_Numbers()
{
    int n=1;
    label:
        cout << n << " ";
        n++;
        if(n<=10){
            goto label;
        }
}

int main()
{
    P_Numbers();
    return 0;
}*/

// return Statement.
int Sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
void print(int sum)
{
    cout << "The sum is " << sum;
    return;
}
int main()
{
    int n,n1,total;
    cin >> n >> n1;
    total=Sum(n,n1);
    print(total);

    return 0;
}
