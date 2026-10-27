#include<iostream>
using namespace std;
int main()
{
    int a;
    float f;
    cout << "Enter an integer number:";
    cin>> a;
    cout << "Enter a float number:";
    cin>>f;

    double d=a+f;
    cout << "After the implicit conversion we get:"<<d<<endl;
    return 0;

}
