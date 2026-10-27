#include<iostream>
#include<cstring> // Include the header for string functions
using namespace std;

int main()
{
    char ch[] = {'A', 'B', 'C', 'D', '\0' };
    char str[] = "Hello world"; // Correct way to initialize a string

    // Calculate the length of array ch
    int lengthCh = sizeof(ch) / sizeof(ch[0]);

    // Print each character of array ch
    for (int i = 0; i < lengthCh; i++)
    {
        cout << ch[i];
    }
    cout << lengthCh<<endl;

    cout << "\nSecond element of ch: " << ch[1] << endl;

    // Print the entire string
    cout << "String: " << str << endl;

    return 0;
}
