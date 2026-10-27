#include<iostream>
using namespace std;
int find_index(int arr[],int n, int key)
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
 void insertion (int arr[],int &n,int idx)
{
    for ( int i=n;i>idx;i--)
    {
        arr[i]=arr[i-1];
    }

}
int main()
{
    int arr[100],i,n,idx,key,e;
    cout << "Enter the size of your array:";
    cin>> n;
    cout << "Elements you put on your array:";
    for (i=0;i<n;i++)
    {
       arr[i]=rand()%(100-10+1)+10;
        cout << arr[i]<< " ";
    }
    cout << "\nEnter the element which before you want to insert new element:";
    cin>>key;
    cout << "\nEnter the element to be inserted:";
    cin>>e;
    idx= find_index(arr,n,key);
    if (idx !=-1)
    {
        insertion(arr,n,idx);
        arr[idx+1]=e;
        n++;
        cout << "\nAfter the insertion array is:";

        for (i=0;i<n;i++)
        {
            cout<< arr[i]<< " ";
        }
    }
    else
    {
        cout << "Elements you enter is not in this array!";
    }
    return 0;
}

