#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "The animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.sound();

    return 0;
}