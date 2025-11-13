#include <iostream>
using namespace std;

int main() {
    cout << "Hello, Modern C++!" << endl;

    // auto type deduction
    auto a = 10;         // int
    auto b = 5.5;        // double
    auto c = 'Z';        // char

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // references instead of pointers
    int num = 100;
    int &ref = num;  // ref is an alias to num
    ref += 50;
    cout << "num = " << num << " (after modifying ref)" << endl;

    // const reference (common in embedded)
    const int &constRef = num;
    cout << "constRef = " << constRef << endl;

    return 0;
}
