// LAB-5 program of default, parameterized and copy constructors for evaluation
#include <iostream>
using namespace std;

class order{
    string dishname;
    int quantity;
    float price;

    public:
    order() : dishname("biryani") , quantity(1), price(100)
    {
        cout << "default order created "<< dishname << " "<< quantity<< "x and price is : " <<price << endl;
    }

    order(string name, int quant, float prc) : dishname(name), quantity(quant), price(prc)
    {
        cout << "custom order is "<< dishname << " "<< quantity<< "x and price is: " << price << endl;
    }

    order(order &o) : dishname(o.dishname), quantity(o.quantity), price(o.price){
        cout << "order copied for "<< dishname << " " << quantity << "x and price is: " << price << endl;
    }

    void display_order(){
        cout << "ITEM \t\t QUANTITY \t\t PRICE \n";
        cout << dishname <<"\t\t"<< quantity << "\t\t" << price << endl;
    }
};
int main()
{
    // default constructor called
    order o1;
    o1.display_order();

    // parameterized constructor called
    order o2("kebab",3,300);
    o2.display_order();

    // copy constructor called
    order o3= o2;
    o3.display_order();
}