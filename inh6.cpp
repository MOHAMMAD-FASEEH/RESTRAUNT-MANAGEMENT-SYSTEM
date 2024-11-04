// LAB-13 IMPLEMENTATION OF SIMPLE AND MULTI-LEVEL INHERITANCE
#include <iostream>
using namespace std;

// Base class (Simple Inheritance)
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

// Derived class (Simple Inheritance)
class Chef : public Employee {
protected:
    string speciality;

public:
    Chef(string empName, int empId, string chefSpeciality) 
        : Employee(empName, empId), speciality(chefSpeciality) {
        cout << "Chef constructor called\n";
    }

    void cook() {
        cout << name << " is cooking a special " << speciality << "." << endl;
    }
};

// Derived class (Multi-level Inheritance)
class HeadChef : public Chef {
private:
    int experience;

public:
    HeadChef(string empName, int empId, string chefSpeciality, int yearsExp) 
        : Chef(empName, empId, chefSpeciality), experience(yearsExp) {
        cout << "HeadChef constructor called\n";
    }

    void manageKitchen() {
        cout << name << " is the Head Chef with " << experience << " years of experience. Managing the kitchen...\n";
    }

    void cookSpecial() {
        cout << name << " is preparing a special dish: " << speciality << " with experience of " << experience << " years!" << endl;
    }
};

int main() {
    // Creating an instance of HeadChef (multi-level inheritance)
    HeadChef chefAlice("Alice", 101, "Biryani", 15);

    cout << "\nEmployee Details:\n";
    chefAlice.displayEmployeeInfo();  // Calling method from Employee class

    cout << "\nChef in Action:\n";
    chefAlice.cook();                 // Calling method from Chef class
    chefAlice.manageKitchen();        // Calling method from HeadChef class
    chefAlice.cookSpecial();          // Head Chef specific special cooking

    return 0;
}
