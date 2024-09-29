#include <iostream>
using namespace std;

class Contact {
    string name;
    string phoneNumber;

public:
    // Default constructor
    Contact() {
        name = "Unknown";
        phoneNumber = "000-000-0000";
    }

    // Parameterized constructor
    Contact(string contactName, string contactNumber) {
        name = contactName;
        phoneNumber = contactNumber;
    }

    // Display contact details
    void display() const {
        cout << "Contact Name: " << name << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << endl;
    }
};

int main() {
    Contact contact1("John Doe", "123-456-7890");
    cout << "Contact 1 Details:" << endl;
    contact1.display();

    Contact contact2;
    cout << "Contact 2 Details (Default Constructor):" << endl;
    contact2.display();

    return 0;
}
