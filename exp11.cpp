#include <iostream>
using namespace std;

class Product {
    string productName;
    int quantity;

public:
    // Default constructor
    Product() {
        productName = "Unnamed Product";
        quantity = 0;
    }

    // Parameterized constructor
    Product(string name, int qty) {
        productName = name;
        quantity = qty;
    }

    // Add stock
    void addStock(int amount) {
        quantity += amount;
        cout << "Added " << amount << " of " << productName << endl;
    }

    // Remove stock
    void removeStock(int amount) {
        if (amount > quantity) {
            cout << "Not enough stock!" << endl;
        } else {
            quantity -= amount;
            cout << "Removed " << amount << " of " << productName << endl;
        }
    }

    // Display product details
    void display() const {
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << endl;
    }
};

int main() {
    Product product("Laptop", 10);
    cout << "Product Details:" << endl;
    product.display();

    product.addStock(5);
    product.removeStock(3);
    product.display();

    return 0;
}
