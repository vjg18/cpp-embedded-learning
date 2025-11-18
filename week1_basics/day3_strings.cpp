#include<iostream>
#include<string>
using namespace std;

int main()
{
    string fName = "Vikas Jayaram";
    cout << fName[0] <<endl;
    cout <<fName.back() <<endl;
    cout <<fName.length() <<endl;
    cout << fName<<endl;

    cout <<fName.replace(0,5, "J")<<endl;
    return 0;
}
