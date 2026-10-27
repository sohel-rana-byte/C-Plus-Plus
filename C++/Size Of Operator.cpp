#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char ch;
    double d;
    long double ld;

    cout << "Memory takes for integer in bytes:" << sizeof (a)<< endl;
    cout << "Memory takes for float in bytes:" << sizeof (b)<< endl;
    cout << "Memory takes for character in bytes:" << sizeof (ch)<<endl;
    cout << "Memory takes for double type in bytes:" << sizeof (d)<<endl;
    cout << "Memory takes for long double type in bytes:" << sizeof (ld)<<endl;

    return 0;
}
