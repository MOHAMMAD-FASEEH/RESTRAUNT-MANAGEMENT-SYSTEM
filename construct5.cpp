// LAB-6 program of constructor overloading for evaluation
#include <iostream>
using namespace std;

class Order {
    string dishName;
    int quantity;
    double pricePerItem;

public:
    // Constructor 1: Default constructor
    Order() {
        dishName = "Biryani";
        quantity = 1;
        pricePerItem = 100.0;
        cout << "Default order created: " << dishName << " x" << quantity << " Price: Rs " << pricePerItem << endl;
    }

    // Constructor 2: Copy constructor
    Order(Order &i)
    {
        this->dishName=i.dishName;
        this->quantity=i.quantity;
        this->pricePerItem=i.pricePerItem;
    }

    // Constructor 3: Constructor with dish name and default quantity
    Order(string name) {
        dishName = name;
        quantity = 1;
        pricePerItem = 100.0; 
        cout << "Order placed: " << dishName << " x" << quantity << " Price: Rs " << pricePerItem << endl;
    }

    // Constructor 4: Constructor with dish name and quantity
    Order(string name, int qty) {
        dishName = name;
        quantity = qty;
        pricePerItem = 100.0; 
        cout << "Order placed: " << dishName << " x" << quantity << " Price: Rs " << pricePerItem << endl;
    }

    // Constructor 5: Full constructor with dish name, quantity, and price
    Order(string name, int qty, double price) {
        dishName = name;
        quantity = qty;
        pricePerItem = price;
        cout << "Order placed: " << dishName << " x" << quantity << " Price per item: Rs " << pricePerItem << endl;
    }

    // Function to display total bill
    void displayBill() {
        double totalPrice = quantity * pricePerItem;
        cout << "Total Price for " << dishName << " x" << quantity << ": Rs " << totalPrice << endl;
        cout << endl;
    }
};

int main() {
    // Using different constructors
    Order order1;                          // Default order
    order1.displayBill();

    Order order2("Kebab");                 // Dish name only
    order2.displayBill();

    Order order3("Mandi", 2);              // Dish name and quantity
    order3.displayBill();

    Order order4("Mandi", 2, 1300.0);      // Dish name, quantity and price
    order4.displayBill();
    Order order5(order4);
    return 0;
}
