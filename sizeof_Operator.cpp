#include<bits/stdc++.h>
using namespace std;
// taken by different data types size.
/*int main()
{
    cout<< "Size of char : " << sizeof(char)<<endl;
    cout<< "Size of int : " <<sizeof(int)<<endl;
    cout<< "Size of long long : " <<sizeof(long long)<<endl;
    cout<< "Size of float : " <<sizeof(float)<<endl;
    cout<< "Size of double : "<<sizeof(double)<<endl;

    return 0;
}*/
// determine the number of bytes

/*int main()
{
    int a;
    long x;
    double p;
    float g;
    cin >> a >> x >> p >> g;
    cout << "No of Bytes taken up by (a+g) is " << sizeof(a + g) << endl;
    cout << "No of Bytes taken up by (a+x) is " << sizeof(a + x) << endl;
    cout << "No of Bytes taken up by (a+p) is " << sizeof(a + p) << endl;
    cout << "No of Bytes taken up by (x+p) is " << sizeof(x + p) << endl;

    return 0;
}*/
int main()
{
  int x[] = {1, 2, 3, 5, 6, 7, 8, 9};
  int length = sizeof(x) / sizeof(x[0]);
  cout << "Length of the array is " << length << endl;
  return 0;
}

