#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float attendence;

    cout << "Enter the total nubers of classes that held: ";
    cin >> a;

    cout << "Enter the total nubers of classes that you attempt: ";
    cin >> b;

    attendence = b * 100 / a;
    cout << "Your percentage is: " << attendence << endl;
 
    if (attendence >= 75)
    {
        cout << "Yes you can write the exam";
    }
    else
    {
        cout << "Sorry! to say, you can't write the exam";
    }
}