#include<iostream>
using namespace std;

int main()
{
    int a, b;
    float f=10.5;
    cout << "Enter your two integers numbers:";
    cin >> a >> b;
    double d = static_cast<float>(a) / b;
    cout << "After the explicit conversion we get: " << d << endl;
    return 0;
}
