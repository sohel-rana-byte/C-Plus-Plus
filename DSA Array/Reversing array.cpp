#include<iostream>
using namespace std;

void reverse( int arr[],int n)
{
    for ( int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main()
{
    int arr[100],n,i;
    cout << "Enter the size of your array:";
    cin>> n;
    cout << "Elements you put on your array:";
    for (i=0;i<n;i++)
    {
        arr[i]=rand()%(100-10+1)+10;
        cout << arr[i]<< " ";
    }
    reverse(arr,n);
    cout << "\nAfter reversing array is:";
    for (i=0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}
