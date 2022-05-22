#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    float attendence;

    cout << "Enter the total nubers of classes that held: ";
    cin >> a;

    cout << "Enter the total nubers of classes that you attempt: ";
    cin >> b;

    
 cout <<"You have any Medical issue?\n For yes press 1 \n And for no press 0\n";
 cin>>c;
 
 attendence = b * 100 / a;
    
    cout << "Your percentage is: " << attendence << endl;
     
    if(attendence >= 75 || c==1)
    {
    	
        cout << "Yes you can write the exam";
        
 
    }
    
    else
    {
        cout << "Sorry! to say, you can't write the exam";
    }
}
