#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Person object created: " << name << ", " << age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Person object destroyed: " << name << ", " << age << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person1("John", 25);
    person1.displayInfo();

    Person person2("Jane", 30);
    person2.displayInfo();

    return 0;
}