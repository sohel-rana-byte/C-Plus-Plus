#include <iostream>
using namespace std;
int main()
{
    int arr[100],n;
    cout << "Enter the size of your array:";
    cin >> n;
    cout << "Elements you put on your array are:";
    for (int i=0;i<n;i++)
    {
        arr[i]=rand()%(100-10+1)+10;
        cout << arr[i]<< " ";
    }
    int max=arr[0];
    for (int i=0;i<n;i++)
    {
        if (max <arr[i])
        {
            max=arr[i];
        }
    }
    cout << "\nMaximum of the array is:"<< max <<endl;
    return 0;
}
