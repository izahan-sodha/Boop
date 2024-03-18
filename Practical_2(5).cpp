#include<iostream>
using namespace std;
int c=5;
int main()
{
  int c=10;
    cout << "local variable "<<c << endl;
    cout << "global variable "<<::c << endl;
    return 0;
}
