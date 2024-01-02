#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    char name[50];
    int age;
    float per;
}student;

student* emp=NULL;

int main()
{
    emp=(student*)malloc(sizeof(student*));
    emp->age=18;

    cout << " " << emp->age;

    return 0;

}
// Arrow operator
/*#include<bits/stdc++.h>
using namespace std;

union student {
    char name[80];
    int age;
    float percentage;
};

union student* emp = NULL;

int main()
{
    emp = (union student*)malloc(sizeof(union student));

    emp->age = 18;

    cout <<""<< emp->age;
}*/
