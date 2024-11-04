// LAB-7 program of static function for evaluation
#include <iostream>
using namespace std;

class Order {
    string dishName;
    int quantity;
    double pricePerItem;

    // Static variable to keep track of total orders
    static int totalOrders;

public:
    // Default constructor 
    Order()
    : dishName("") , quantity(1), pricePerItem(100.00){}

    // Constructor to create an order
    Order(string name, int qty, double price) {
        dishName = name;
        quantity = qty;
        pricePerItem = price;
        totalOrders++;  
        cout << "Order placed: " << dishName << " x" << quantity << " Price: Rs " << pricePerItem << endl;
    }

    // Static function to get total number of orders
    static int getTotalOrders() {
        return totalOrders;
    }

    // Function to display the total bill
    void displayBill() {
        double totalPrice = quantity * pricePerItem;
        cout << "Total Price for " << dishName << " x" << quantity << ": Rs " << totalPrice << endl;
    }
};

// Initialize the static variable
int Order::totalOrders = 0;

int main() {
    Order x[100];
    string n;
    int q;
    double p;
    // Place different orders
    // Order order1("Biryani", 2, 100.0);
    // order1.displayBill();

    // Order order2("Kebab", 3, 150.0);
    // order2.displayBill();

    // Order order3("Mandi", 1, 1300.0);
    // order3.displayBill();

    for(int i=0; i<=1; i++){
        cout << "enter dishname: ";
        cin >> n;
        cout << "enter quantity: ";
        cin >> q;
        cout << "enter price: ";
        cin >> p;
        x[i] = Order(n,q,p);
    }

    // Accessing static function to get total orders
    cout << "\nTotal Orders Placed: " << Order::getTotalOrders() << endl;

    return 0;
}
