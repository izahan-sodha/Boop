#include<iostream>
#include <iomanip>
using namespace std;

int main()
{ double ktom =1000.0;
   double mtocm =100.0;
   double cmtoft= 0.0328084;
   double fttoin= 12.00;
   double km;
   cout << "enter a km" << endl;
   cin >>km;
   double meter=km*ktom;
   double cm=meter*mtocm;
   double ft=cm*cmtoft;
   double inc=ft*fttoin;
   cout<<fixed<<setprecision(2);
   cout<<setw(22)<<"km to meter is:" <<meter<<endl;
   cout<<setw(22)<<"meter to cm is:" <<cm<<endl;
    cout<<setw(22)<<"cm to fit is:" <<ft<<endl;
    cout<<setw(22)<<"fit to inch is:" <<inc<<endl;
    
    return 0;
}