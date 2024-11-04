// LAB-14 IMPLEMENTATION OF MULTIPLE AND HYBRID INHERITANCE
#include <iostream>
using namespace std;

// Base class 1
class Employee {
protected:
    string name;
    int id;

public:
    Employee(string empName, int empId) : name(empName), id(empId) {
        cout << "Employee constructor called\n";
    }

    void displayEmployeeInfo() {
        cout << "Employee Name: " << name << "\nEmployee ID: " << id << endl;
    }
};

// Base class 2
class InventoryManager {
protected:
    int stock;

public:
    InventoryManager(int initStock) : stock(initStock) {
        cout << "InventoryManager constructor called\n";
    }

    void checkInventory() {
        cout << "Checking inventory. Stock available: " << stock << " items.\n";
    }

    void updateStock(int newStock) {
        stock = newStock;
        cout << "Stock updated. New stock: " << stock << " items.\n";
    }
};

// Derived class using Multiple Inheritance
class RestaurantManager : public Employee, public InventoryManager {
private:
    string restaurantName;

public:
    RestaurantManager(string empName, int empId, int initStock, string restName)
        : Employee(empName, empId), InventoryManager(initStock), restaurantName(restName) {
        cout << "RestaurantManager constructor called\n";
    }

    void manageRestaurant() {
        cout << name << " is managing the restaurant: " << restaurantName << ".\n";
        checkInventory();
    }
};

// Derived class using Hybrid Inheritance
class Chef : public Employee {
private:
    string speciality;

public:
    Chef(string empName, int empId, string chefSpeciality)
        : Employee(empName, empId), speciality(chefSpeciality) {
        cout << "Chef constructor called\n";
    }

    void cook() {
        cout << name << " is cooking a special " << speciality << ".\n";
    }
};

// Further Hybrid Inheritance combining multiple types
class HeadChef : public Chef, public InventoryManager {
private:
    int experience;

public:
    HeadChef(string empName, int empId, string chefSpeciality, int yearsExp, int stockAmount)
        : Chef(empName, empId, chefSpeciality), InventoryManager(stockAmount), experience(yearsExp) {
        cout << "HeadChef constructor called\n";
    }

    void manageKitchen() {
        cout << name << " is the Head Chef with " << experience << " years of experience. Managing the kitchen...\n";
        cook();
        checkInventory();
    }
};

int main() {
    // Using Multiple Inheritance
    RestaurantManager manager("Alice", 101, 500, "Delicious Bites");
    manager.displayEmployeeInfo();
    manager.manageRestaurant();

    cout << "\n";

    // Using Hybrid Inheritance
    HeadChef headChef("Bob", 102, "Biryani", 10, 300);
    headChef.displayEmployeeInfo();
    headChef.manageKitchen();

    return 0;
}
