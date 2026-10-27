#include<iostream>
using namespace std;

int call_by_value(int x, int y)
{
    //cout << "Enter your two numbers:";
    //cin>>x>>y;
    x=10;
    y=20;
    cout << "Value of x:"<<x<< " value of y:"<<y<<endl;
}
int main()
{
    int x,y;
    cout << "Enter your two numbers:";
    cin>>x>>y;

    call_by_value(x,y);

    cout << "Value of x:"<<x<< " value of y:"<<y<<endl;
    return 0;
}
