#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    // Constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Method to calculate area
    int area() {
        return this->width * this->height;
    }

    // Method to calculate perimeter
    int perimeter() {
        return 2 * (this->width + this->height);
    }
};

int main() {
    Rectangle rect(4, 5);
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    return 0;
}