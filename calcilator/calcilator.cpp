
#include <iostream>
using namespace std;

int main()
{
    cout << "welcome to calculator program\n";
    cout << "please enter 2 values\n";
    float firstvalue, secondvalue;
    cin >> firstvalue >> secondvalue;
    char Operator = 'A';
    cout << "please enter the operator\n";
    cin >> Operator;
    if (Operator == '+')
    {
        cout << firstvalue + secondvalue;
    }
    else if (Operator=='-')
    {
        cout << firstvalue - secondvalue;
    }
    else if (Operator == '*')
    {
        cout << firstvalue * secondvalue;
    }
    else if (Operator == '/')
    {
        cout << firstvalue / secondvalue;
    }

}

