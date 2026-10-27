#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the employee grade:";
    cin>>ch;
    switch(ch)
    {
    case 'A' :
        cout << "The salary of this employee is:50000";
         break;
    case 'B':
         cout << "The salary of this employee is:40000";
         break;
    case 'C':
         cout << "The salary of this employee is:30000";
         break;
    case 'D':
         cout << "The salary of this employee is:20000";
         break;
    default :
        cout << "Invalid grade";

    }
    return 0;
}
