// LAB-15 IMPLEMENTATION OF VIRTUAL FUNCTIONS
#include <iostream>
using namespace std;

// Base class - Chef
class Chef {
public:
    // Virtual function
    virtual void prepareDish() {
        cout << "The chef is preparing a general dish." << endl;
    }
};

// Derived class - ItalianChef
class ItalianChef : public Chef {
public:
    // Overriding the virtual function
    void prepareDish() override {
        cout << "The Italian Chef is preparing pasta." << endl;
    }
};

// Derived class - IndianChef
class IndianChef : public Chef {
public:
    // Overriding the virtual function
    void prepareDish() override {
        cout << "The Indian Chef is preparing biryani." << endl;
    }
};

// Function that accepts a pointer to the base class
void restaurant(Chef* chef) {
    // Calls the appropriate derived class function using virtual function
    chef->prepareDish();
}

int main() {
    Chef generalChef;
    ItalianChef italianChef;
    IndianChef indianChef;

    // Call using base class pointer
    restaurant(&generalChef);   // Output: The chef is preparing a general dish.
    restaurant(&italianChef);   // Output: The Italian Chef is preparing pasta.
    restaurant(&indianChef);    // Output: The Indian Chef is preparing biryani.

    return 0;
}
