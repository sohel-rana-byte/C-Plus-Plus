#include<iostream>
using namespace std;
int main()

{
    char ch;
    cout << "Enter any alphabet from keyboard:";
    cin>> ch;

    switch(ch)
    {
case 'A' :
case 'a':
case 'E':
case 'e':
case 'I':
case 'i':
case 'o':
case 'O':
case 'u':
case 'U':
    cout << ch << " is a vowel."<< endl;
    break;

default:
    cout << ch<< " is a consonant"<<endl;
    }
    return 0;
}
