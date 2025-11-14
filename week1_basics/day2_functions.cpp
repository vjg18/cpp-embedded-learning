#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct OperationLog {
    string operation;
    double result;
};

int calc(int a, int b) //→ return sum
{
    return (a+b);
}

double calc(double a, double b) //→ return product
{
    return (a*b);
}

int calc(int a, int b, int c) //→ return max of 3
{
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;
}

double calc(double a, double b, double c ) //→ return (a + b + c)
{
    return (a+b+c);
}

int main()
{
    double res;

    union num1
    {
        int ia;
        double da;
    }a;
    union num2
    {
        int ib;
        double db;
    }b;
    union num3
    {
        int ic;
        double dc;
    }c;

    vector<OperationLog> logs;
    int choice;
    
    do
    {
        cout<< "1. Add two integers" <<endl;
        cout<< "2. Multiply two doubles" <<endl;
        cout<< "3. Max of three integers" <<endl;
        cout<< "4. Add three doubles (third is default)" <<endl;
        cout<< "5. Show logs & exit" <<endl;

        cout<<"Enter Choice"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
            {
                cout<<"Enter two numbers to add"<<endl;
                cin>>a.ia >> b.ib ;
                res = calc(a.ia,b.ib);
                logs.push_back({"sum of ints", res});
                cout<<res<<endl;
                break;
            }
            case 2:
            {
                cout<<"Enter two numbers to mul"<<endl;
                cin>>a.da >> b.db ;
                res = calc(a.da,b.db);
                logs.push_back({"prod of doubles", res});
                cout<<res<<endl;
                break;
            }
            case 3:
            {
                cout<<"Enter three numbers "<<endl;
                cin>>a.ia >> b.ib >>c.ic;
                res = calc(a.ia,b.ib,c.ic);
                logs.push_back({"max of ints", res});
                cout<<res<<endl;
                break;
            }
            case 4:
            {
                cout<<"Enter three numbers "<<endl;
                cin>>a.da >> b.db >>c.dc;
                res = calc(a.da,b.db,c.dc);
                logs.push_back({"sum of 3 doubles", res});
                cout<<res<<endl;
                break;
            }
            case 5:
            {
                cout << "--- Logs ---" << endl;

                for (auto it: logs)
                {
                    cout << it.operation << " => " << it.result << endl;
                }
                break;
            }
            default: cout << "Invalid choice. Try again." << endl;

        }
    }
    while(choice !=5);
    return 0;
}
