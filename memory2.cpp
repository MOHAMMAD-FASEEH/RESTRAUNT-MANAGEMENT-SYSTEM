// LAB-12 DYNAMIC MEMORY ALLOCATION NEW AND DELETE USING CONSTRUCTORS AND DESTRUCTORS
#include <iostream>
using namespace std;

class TableOrder
{
    string *items; // Dynamically allocated array for storing item names
    int *quantity; // Dynamically allocated array for item quantities
    int numItems;

public:
    // Constructor to allocate memory for items and quantities
    TableOrder(int n)
    {
        numItems = n;
        items = new string[numItems]; // Allocate memory for items
        quantity = new int[numItems]; // Allocate memory for quantities
        cout << "Memory allocated for " << numItems << " items at this table.\n";
    }

    // Function to take order for each item
    void takeOrder()
    {
        for (int i = 0; i < numItems; i++)
        {
            cout << "Enter name of item " << i + 1 << ": ";
            cin >> items[i];
            cout << "Enter quantity of " << items[i] << ": ";
            cin >> quantity[i];
        }
    }

    // Function to display the order for the table
    void displayOrder()
    {
        cout << "\nTable Order Summary:\n";
        for (int i = 0; i < numItems; i++)
        {
            cout << "Item: " << items[i] << ", Quantity: " << quantity[i] << endl;
        }
    }

    // Destructor to free dynamically allocated memory
    ~TableOrder()
    {
        delete[] items;    // Deallocate memory for items array
        delete[] quantity; // Deallocate memory for quantity array
        cout << "Memory deallocated for table order.\n";
    }
};

int main()
{
    int numTables;

    // Ask how many tables are being served
    cout << "Enter the number of tables: ";
    cin >> numTables;

    // Handle orders for each table dynamically
    for (int t = 1; t <= numTables; t++)
    {
        int numItems;
        cout << "\nTable " << t << ": Enter the number of items ordered: ";
        cin >> numItems;

        // Dynamically create a TableOrder object for each table
        TableOrder *table = new TableOrder(numItems);

        table->takeOrder();    // Take the order for this table
        table->displayOrder(); // Display the order for this table

        // After processing, free the memory for the table's order
        delete table; // Destructor will automatically be called
    }

    return 0;
}
