#include<iostream>
using namespace std;

int main()
{int a, b;
    cout << "enter value of a" << endl;
    cin >>a;
    cout << "enter value of b" << endl;
    cin >> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "value of a is :" <<a<<endl;
    cout << "value of b is :" <<b<<endl;
    return 0;
}