// LAB-3 default function implementation for evaluation
#include <iostream>
using namespace std;

void orderPizza( string size = "regular", string crust= "regular", int serves = 1){
    cout << serves << " " << size << " pizza with " << crust << " crust" << endl;
    cout << "your order is being prepared" << endl;
    cout << endl;
}

void orderPasta(  int serves = 0, string size = "regular", string type ="macaroni"){
    cout << serves << " " << size << " "<< type << " pasta" << endl;
    cout << "your order is being prepared" << endl;
    cout << endl;
}

int main()
{   
    
    orderPizza();   //  default pizza order
    orderPizza("large", "thin",2); // customized pizza order

    orderPasta();       // default pasta order
    orderPasta(3,"large"); // customized pasta order
}