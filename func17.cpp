// LAB-8 program of pass by value, pass by refrence and return by refrence for evaluation
#include <iostream>
using namespace std;

void calculate_bill(double price, int quantity){
    price *= quantity;
    cout << "total bill for "<< quantity << " items is Rs " << price << endl;
}

void updatefeedback(string &feedback){
    cout << " current feedback: " << feedback << endl;
    feedback = " excellent restraunt! would love to come again";
    cout << "updated feedback: " << feedback << endl;
}

int &getstock(int &stock){
    return stock;
}
int main()
{   
    // pass by value
    double o_price = 10.99;
    int quantity = 3;
    calculate_bill(o_price , quantity);
    cout << "original price " << o_price << " original qauntity" << quantity << endl;
    cout<< "\n";

    // pass by refrence
    string feedback = " good restraunt, need to improve";
    updatefeedback(feedback);
    cout << "after calling the function: "<< feedback << endl;
    cout << "\n";
    
    // return by refrence
    int stock = 50;
    cout << "initial stock value: " << stock << endl;
    int &stockref = getstock(stock);

    stockref -= 10 ;
    cout << "stock after deduction: "<< stock << endl;
}