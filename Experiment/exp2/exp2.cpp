#include<iostream>
using namespace std;

struct book {
    int id;
    char name[20];
    int price;
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    // Dynamically allocate memory for the books
    book* s = new book[n];

    cout << "Enter books details (Id, name, price):\n";
    for (int i = 0; i < n; i++) {
        cout << "Book no." << i + 1 << ": ";
        cin >> s[i].id >> s[i].name >> s[i].price;
    }

    cout << "\nShowing relevant books (price < 500):\n";
    for (int i = 0; i < n; i++) {
        if (s[i].price < 500) {
            cout << "Book no. " << i + 1 
                 << "\nBook id: " << s[i].id 
                 << "\nBook name: " << s[i].name 
                 << "\nBook price: " << s[i].price << endl;
        }
    }

    // Free the allocated memory
    delete[] s;

    return 0;
}
