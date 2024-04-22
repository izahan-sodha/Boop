#include <iostream>
using namespace std;

class Item{
private:
   int quantity;
   int cost;
    
public:
   void get_data();
   void put_data();
};

void Item::get_data() {
   cout << "Enter quantity: ";
   cin >> quantity;
   cout << "Enter cost: ";
   cin >> cost;
}

void Item::put_data() {
    cout << "Quantity: " << quantity << endl;
    cout << "Cost: " << cost << endl;
}
int main() {
    Item item;
    item.get_data();
    item.put_data();
    return 0;
}