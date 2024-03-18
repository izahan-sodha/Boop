#include<iostream>
using namespace std;

int main()
{
 int n;
 int flag=0;
    cout << "enter a number" << endl;
    cin >> n;
    for(int i=2;i<n;i++)
    {
    {
    if(n%i==0)
    {
    cout << "num is not prime" << endl;
    flag=1;
    }
    break;
    }
    }
    if(flag==0)
    {
    cout << "num is prime" << endl;
    }
    return 0;
}