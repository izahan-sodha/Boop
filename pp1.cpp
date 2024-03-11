#include <iostream>

using namespace std;

int main() 
{
    
    double d,f;
    
    cout << "Enter temperature in degree : ";
    cin >> d;
    f=(d*9.0/5.0)+32;
    cout << "Temperature in Fahrenheit: " << f<< endl;
    
    return 0;
}