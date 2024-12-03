#include <iostream>
using namespace std;

class Transportation {
private:
    double weight, length, width, height;
    string packageType;
    string pt[3] = {"Ground", "Air", "Express"};
    double cost_weight;

public:
    void set_details(double w, double l, double wi, double h, int pi) {
        if (w >= 0.1 && w <= 50)
            weight = w;
        length = l;
        width = wi;
        height = h;
        packageType = pt[pi];
    }

    double getWeight() {
        return weight;
    }

    string getPackageType() {
        return packageType;
    }

    void calculateCost(double weight) {
        if (weight >= 0.1 && weight <= 1) {
            cost_weight = 5 + (2 * weight);
        } else if (weight > 1 && weight <= 10) {
            cost_weight = 10 + (1.5 * weight);
        } else if (weight > 10 && weight <= 50) {
            cost_weight = 20 + (1 * weight);
        } else {
            cost_weight = -1; // Invalid weight
        }
    }

    void calculateCost(string packageType, double weight) {
        if (packageType == "Ground") {
            if (weight >= 0.1 && weight <= 1) {
                cost_weight = 5 + (2 * weight);
            } else if (weight > 1 && weight <= 10) {
                cost_weight = 10 + (1.5 * weight);
            } else if (weight > 10 && weight <= 50) {
                cost_weight = 20 + (1 * weight);
            }
        } else if (packageType == "Air") {
            if (weight >= 0.1 && weight <= 1) {
                cost_weight = 10 + (3 * weight);
            } else if (weight > 1 && weight <= 10) {
                cost_weight = 20 + (2 * weight);
            } else if (weight > 10 && weight <= 50) {
                cost_weight = 30 + (1.5 * weight);
            }
        } else if (packageType == "Express") {
            if (weight >= 0.1 && weight <= 1) {
                cost_weight = 15 + (4 * weight);
            } else if (weight > 1 && weight <= 10) {
                cost_weight = 30 + (3 * weight);
            } else if (weight > 10 && weight <= 50) {
                cost_weight = 40 + (2 * weight);
            }
        } else {
            cost_weight = -1; // Invalid package type
        }
    }

    void displayCost() {
        if (cost_weight != -1) {
            cout << "The cost of shipping is: $" << cost_weight << endl;
        } else {
            cout << "Invalid input parameters." << endl;
        }
    }
};

int main() {
    Transportation t1;
    t1.set_details(25.5, 10, 4, 5, 1); // 0 for ground, 1 for air, 2 for express

    t1.calculateCost(t1.getPackageType(), t1.getWeight());
    t1.displayCost();

    return 0;
}
