/*#include <iostream>
using namespace std;

int find_index(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

void insertion(int arr[], int &n, int idx) {
    for (int i = n; i > idx; i--) {
        arr[i] = arr[i - 1];
    }
}

int main() {
    int arr[100], n, idx, key, e;
    cout << "Enter the size of your array: ";
    cin >> n;
    cout << "Elements you put in your array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (100 - 10 + 1) + 10;
        cout << arr[i] << " ";
    }
    cout << "\nEnter the element before which you want to insert the new element: ";
    cin >> key;
    cout << "\nEnter the element to be inserted: ";
    cin >> e;
    idx = find_index(arr, n, key);
    if (idx != -1) {
        insertion(arr, n, idx);
        arr[idx] = e;
        n++;  // Increment the size of the array
        cout << "\nAfter the insertion, the array is: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Element you entered is not in this array!";
    }
    return 0;
}*/
#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

int main() {
    vector<int>arr={7,2,8,1,9};
    //int arr[] = {7, 2, 8, 1, 9};
    //int n = sizeof(arr) / sizeof(arr[0]);
    int n=arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(arr[i] - arr[j]) == 2) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}


