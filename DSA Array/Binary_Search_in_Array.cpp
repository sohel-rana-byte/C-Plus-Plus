#include <iostream>
#include <cstdlib>
using namespace std;

void sorted_array(int arr[], int n) {
    cout << "Elements you put on your array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (200 - 10 + 1) + 10;
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted array in Ascending Order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int binary_search(int arr[], int n, int low, int high, int key)
 {
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Prevent potential overflow

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[100], n, key;
    cout << "Enter the size of your array: ";
    cin >> n;
    cout << "\nEnter the search key: ";
    cin >> key;

    sorted_array(arr, n);

    int foundIndex = binary_search(arr, n, 0, n - 1, key);
    if (foundIndex != -1) {
        cout << key << " is present at index " << foundIndex << endl;
    } else {
        cout << key << " is not present in the array." << endl;
    }

    return 0;
}
