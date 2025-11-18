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
    enum class MenuChoice { ADD=1, MUL, MAX3, SUM3, SHOW_LOGS, EXIT };
    MenuChoice choice;
    int menu;
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
    
    
    do
    {
        cout<< "1. Add two integers" <<endl;
        cout<< "2. Multiply two doubles" <<endl;
        cout<< "3. Max of three integers" <<endl;
        cout<< "4. Add three doubles (third is default)" <<endl;
        cout<< "5. Show logs & exit" <<endl;

        cout<<"Enter Choice"<<endl;
        cin>>menu;
        choice = static_cast<MenuChoice>(menu);
        switch (choice)
        {
            case MenuChoice::ADD:
            {
                cout<<"Enter two numbers to add"<<endl;
                cin>>a.ia >> b.ib ;
                res = calc(a.ia,b.ib);
                logs.push_back({"sum of ints", res});
                cout<<res<<endl;
                break;
            }
            case MenuChoice::MUL:
            {
                cout<<"Enter two numbers to mul"<<endl;
                cin>>a.da >> b.db ;
                res = calc(a.da,b.db);
                logs.push_back({"prod of doubles", res});
                cout<<res<<endl;
                break;
            }
            case MenuChoice::MAX3:
            {
                cout<<"Enter three numbers "<<endl;
                cin>>a.ia >> b.ib >>c.ic;
                res = calc(a.ia,b.ib,c.ic);
                logs.push_back({"max of ints", res});
                cout<<res<<endl;
                break;
            }
            case MenuChoice::SUM3:
            {
                cout<<"Enter three numbers "<<endl;
                cin>>a.da >> b.db >>c.dc;
                res = calc(a.da,b.db,c.dc);
                logs.push_back({"sum of 3 doubles", res});
                cout<<res<<endl;
                break;
            }
            case MenuChoice::SHOW_LOGS:
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
    while(menu !=5);
    return 0;
}
