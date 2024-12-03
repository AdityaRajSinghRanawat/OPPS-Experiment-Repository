#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    // Default constructor
    Point() {
        x = 0;
        y = 0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Point(int a, int b) {
        x = a;
        y = b;
        cout << "Parameterized constructor called" << endl;
    }

    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;
    p1.display();

    Point p2(3, 4);
    p2.display();

    return 0;
}