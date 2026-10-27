#include <iostream>
using namespace std;

int main() {
    string a;
    int i, length, countW = 0;
    cout << "Enter your string:";
    getline(cin, a);

    length = a.length();

    for (i = 0; i < length; i++)
        {  // Start i from 0 and use < for correct indexing
        if (a[i] == ' ')
        {         // Use a[i] to access individual characters
            countW++;
        }
    }
    cout << "Length of this string is: " << length << endl;
    cout << "Total words in the string is: " << countW + 1 << endl;  // Add 1 to count the last word

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    string s;
    int i,length,countw=0;

    cout << "Enter your string:";
    getline(cin,s);

    length=s.length();
    for(i=0;i<length;i++)
    {
        if (s[i]== ' ')
            countw++;
    }
    cout << "Length of this string is:"<<length<<endl;
    cout << "Total words in the string is:"<<countw+1<<endl;
    return 0;
}
