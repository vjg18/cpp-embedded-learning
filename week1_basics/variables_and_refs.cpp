#include <iostream>

using namespace std;

void incIntbyValue (int x)
{
    x++;
    cout<<"[Inside incrementByValue] num = " << x << endl;;
}

void incIntbyRef (int &x)
{
    x++;
    cout<<"[Inside incrementByReference] num = " << x << endl;
}

int main()
{
    cout << "--- Pass by Value vs Reference Demo ---" << endl;
    int value =10;
    
    incIntbyValue(value);
    cout << "After incrementByValue, value = " << value << endl;

    
    incIntbyRef(value);
    cout << "After incrementByRef, value = " << value << endl;

    // Demonstrate const reference
    const int &constRef = value;
    cout << "constRef = " << constRef << " (read-only)" << endl;

    return 0;
}