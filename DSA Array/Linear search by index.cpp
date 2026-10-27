#include<iostream>
using namespace std;

int linear_search ( int arr[],int n, int key)
{
    for ( int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100],n,i,key;
    cout << "Enter the size of your array:";
    cin>> n;
    cout << "Elements you put on your array:";
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%(100-10+1)+10;
        cout << arr[i]<< " ";
    }
    cout<< "\nEnter the key to be searched:";
    cin>>key;
    int idx=linear_search(arr,n,key);

    if(idx !=-1)
    {
        cout << key << " is present on the index "<<idx<<endl;
    }
    else
    {
        cout << key << " is not present on array.";
    }
    return 0;
}
