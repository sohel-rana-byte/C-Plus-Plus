#include <iostream>
#include <cstring>  // Added for strlen
using namespace std;

int main() {
    char string[100]; // Allocate a fixed-size array for input
    int arr[100];
    cout << "Enter your array:";
   for(int i=0;i<100;i++)
   {
       cin >> arr[i];
   }


    int lengtharr=strlen(arr);
    cout << "Size of your integer array :"<<lengtharr<<endl;

    cout << "Enter your string: ";
    cin.getline(string,100);

    // Use strlen for string length
    int lengthstring = strlen(string);
    cout << "Size of your string: " << lengthstring << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int lengtharr = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of this array is: " << lengtharr << endl;

    return 0;
}
