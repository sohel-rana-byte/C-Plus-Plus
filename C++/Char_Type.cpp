#include <iostream>
using namespace std;

int main()
{
    char stu1[] = "work as an array";

    char *stu2 = "work as a pointer"; // Added const as string literals are constant

    cout << stu1 << endl; // display work as an array
    cout << stu2 << endl; // display work as a pointer

    // stu1++; // Invalid operation on an array

    stu2++; // Valid operation on a pointer

    cout << stu2 << endl; // prints "ork as a pointer"

    return 0;
}
