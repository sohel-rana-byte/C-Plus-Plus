#include<iostream>
using namespace std;
void deletion(int arr[],int n, int idx)
{
    for (int i=idx;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
}
int main()
{
    int arr[100],i,n,idx;
    cout << "Enter the size of your array:";
    cin>>n;
    cout << "Elements you put on your array:";
    for (i=0;i<n;i++)
    {
        arr[i]=rand()%(1000-100+1)+100;
        cout << arr[i]<< " ";
    }
    idx=0;
    deletion(arr,n,idx);
    n--;
    cout<< "\nAfter First Deletion array is:";
    for (i=0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}

