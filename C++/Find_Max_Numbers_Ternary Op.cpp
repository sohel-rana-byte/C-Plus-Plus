#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter the two integer numbers:";
    cin>> x>>y;

    (x>y)? cout << x<< " is the biggest number.": cout << y << " is the biggest number.";
    return 0;

}
