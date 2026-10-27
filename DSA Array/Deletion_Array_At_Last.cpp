#include<iostream>
using namespace std;

void deletion_Last(int arr[],int n,int idx)
{
    for(int i=idx;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    cout << "After deletion array is:";
    for (int i=0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
}
int main()
{
    int arr[100],i,n,idx;
    cout << "Enter the size of your array:";
    cin>>n;
    cout << "Elements you put on your array:";
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%(1000-10+1)+10;
        cout << arr[i]<< " ";
    }
    cout << "\nEnter the index to be deleted:";
    cin>>idx;
    deletion_Last(arr,n,idx);
    return 0;
}
