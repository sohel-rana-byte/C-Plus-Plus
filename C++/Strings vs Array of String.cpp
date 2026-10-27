#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ch[100];
    string A, B;

    cout << "Enter your character array (max 99 characters): ";
    cin.getline(ch, 100);  // Safer input with maximum length

    int lengthch = strlen(ch);  // Use strlen for actual string length
    cout << "Size of your character array: " << lengthch << endl;

    cout << "Enter your first string: ";
    getline(cin, A);
    cout << "Enter your second string: ";
    getline(cin, B);

    string C = A + B;
    cout << "After Concatenating:\n" << C ; // Clearer output

    return 0;
}
