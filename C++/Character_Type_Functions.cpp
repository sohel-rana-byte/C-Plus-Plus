#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any key from the keyboard:";
    cin >> ch;

    if (isdigit(ch))
    {
        cout << ch << " is a numeric character." << endl;
    }
    else if (isalpha(ch))
    {
        cout << ch << " is an alphabet character." << endl;
    }
    else if (ispunct(ch))
    {
        cout << ch << " is a punctuation/special character." << endl;
    }
    else
    {
        cout << ch << " is not a recognized character type." << endl;
    }

    return 0;
}
