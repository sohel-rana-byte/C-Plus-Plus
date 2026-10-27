#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter your two numbers:";
    cin>> a >> b;

    c=a&b;
    cout << "After the bitwise-and operation we get:"<< c << endl;

    c=a|b;
    cout << "After the bitwise-or operation we get:"<< c << endl;

    c=a^b;
    cout << "After the X-OR operation we get:"<< c << endl;

    c=~b;
    cout << "After the 1-s Complement operation we get:"<< c << endl;

    c= a << 2;
    cout << "After the left-shift we get:"<< c <<endl;

    c=a>>2;
    cout << "After the right-shift operation we get:"<< c <<endl;

    char ch1,ch2,ch3;
    cout << "Enter two character:";
    cin>>ch1>>ch2;

    ch3=ch1&ch2;
    cout << "After the bitwise-and operation we get:"<< ch3<< endl;


    return 0;
}
