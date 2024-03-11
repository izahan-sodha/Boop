#include<iostream>
#include <iomanip>
using namespace std;

int main()
{ double ktom =1000.0;
   double mtocm =100.0;
   double km;
   cout << "enter a km" << endl;
   cin >>km;
   double meter=km*ktom;
   double cm=meter*mtocm;
   cout<<fixed<<setprecision(2);
   cout<<"km to meter is:" <<meter<<endl;
   cout<<"meter to cm is:" <<cm<<endl;
    return 0;
}