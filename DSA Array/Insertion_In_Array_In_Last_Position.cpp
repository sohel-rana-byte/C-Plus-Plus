#include <iostream>

using namespace std;

void array_element(int arr[], int n)  // Pass array as argument
{
    for (int i = 0; i < n; i++)  // Initialize i to 0
    {
        arr[i] = rand() % (1000 - 100 + 1) + 100;
        cout << arr[i] << " ";
    }
}

void insertion_last(int arr[], int n, int key)  // Pass n by reference
{
    if (n < 100)
        {  // Check for array size overflow
        arr[n] = key;
        n++;
    } else
    {
        cout << "Array is full, cannot insert." << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], n, key;
    cout << "Enter the size of your array: ";
    cin >> n;

    array_element(arr, n);  // Pass array to function

    cout << "Enter the element to be inserted: ";
    cin >> key;

    insertion_last(arr, n, key);  // Pass n by reference

    return 0;
}
