#include<iostream>
using namespace std;

int main()
{
    double a;
    double b;
    double sum;
    double div;
    double sub;
    double multi;
    cout << "enter a two number" << endl;
    cin >> a>>b;
    sum=a+b;
    div=a/b;
    sub=a-b;
    multi=a*b;
    cout << "sum of two is: " <<sum<< endl;
    cout << "division of two is: " <<div<< endl;
    cout << "multi of two is: " <<multi<< endl;
    cout << "sub of two is: " <<sub<< endl;
    return 0;
}