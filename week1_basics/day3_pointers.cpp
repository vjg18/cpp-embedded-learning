#include <iostream>
using namespace std;

// Function using pointer
void incrementPtr(int* p) {
    (*p)++;
}

// Function using reference
void incrementRef(int& r) {
    r++;
}

// Function using const reference (read-only)
void printValue(const int& v) {
    cout << "Value = " << v << endl;
}

int main() {
    int a = 10;

    cout << "Original: " << a << endl;

    incrementPtr(&a);
    cout << "After pointer increment: " << a << endl;

    incrementRef(a);
    cout << "After reference increment: " << a << endl;

    printValue(a);

    return 0;
}
