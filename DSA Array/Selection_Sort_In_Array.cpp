#include <iostream>
#include <algorithm>

using namespace std;

// Function to print an array
void print_array(int Arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << " " << Arr[i];
    }
    cout << "\n";
}

// Function for selection sorting
void selection_sort(int Arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        {
        int min_index = i;

        // Find the index of the minimum element
        for (int j = i + 1; j < n; j++) {
            if (Arr[j] < Arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element
        if (min_index != i) {
            swap(Arr[i], Arr[min_index]);
        }
    }
}

int main() {
    cout << "ID: 41230100799\n";

    // Sample array
    int Arr[] = {21, 9, 7, 13, 15, 35, 11, 2};
    int n = 8;

    cout << "Before Sorting:";
    print_array(Arr, n);

    // Call the selection_sort function
    selection_sort(Arr, n);

    cout << "After Sorting:";
    print_array(Arr, n);

    return 0;
}

