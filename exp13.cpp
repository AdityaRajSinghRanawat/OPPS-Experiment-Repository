#include <iostream>
using namespace std;

class Vehicle {
    string model;
    int year;
    float mileage;

public:
    // Default constructor
    Vehicle() {
        model = "Unknown Model";
        year = 0;
        mileage = 0.0;
    }

    // Parameterized constructor
    Vehicle(string vehicleModel, int vehicleYear, float vehicleMileage) {
        model = vehicleModel;
        year = vehicleYear;
        mileage = vehicleMileage;
    }

    // Display vehicle details
    void display() const {
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " km" << endl;
        cout << endl;
    }
};

int main() {
    Vehicle vehicle1("Toyota Camry", 2020, 15000.5);
    cout << "Vehicle 1 Details:" << endl;
    vehicle1.display();

    Vehicle vehicle2;
    cout << "Vehicle 2 Details (Default Constructor):" << endl;
    vehicle2.display();

    return 0;
}
