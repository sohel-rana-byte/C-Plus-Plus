#include <iostream>
using namespace std;

int main()
{
    int x;// x means input in year
    cout << "Enter any year:";
    cin>> x;
    ((x%4==0 && x%100 !=0) || x%400==0)?
     cout << x<< " is a century year": cout << x<< " is not a century year";
    return 0;
}
