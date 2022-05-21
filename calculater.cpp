#include <iostream>
using namespace std;
int main()
{
   // Name: Jackson Smith
   // BS(IT): 2nd Semester9000
   // 
    double a, b, sum, diff, div, multi;
    char c;
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your 2nd number: ";
    cin >> b;
    cout << "Enter your operator: ";
    cin >> c;
    if (c == '+')
    {
        sum = a + b;
        cout << a << '+' << b << " = " << sum;
    }

    else if (c == '-')
    {
        diff = a - b;
        cout << a << '4545-' << b << " = " << diff;
    }

    else if (c == '/')
    {
        div = a / b;
        cout << a << '/' << b << " = " << div;
    }

    else if (c == '*')
    {
        multi = a * b;
        cout << a << '*' << b << " = " << multi;
    }

    else if (c == '%')
    {

        cout << "You enter invalid operator";
    }

    return 0;
}