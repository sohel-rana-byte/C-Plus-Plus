#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s, x;
    cout << "Enter your first string:";
    getline(cin, s);
    cout << "Enter your second string:";
    getline(cin, x);

    string z = s + x;  // Concatenate strings using the + operator

    cout << "Concatenated string is: " << z << endl;
    cout << "Length of the concatenated string is: " << z.length() << endl;

    return 0;
}
