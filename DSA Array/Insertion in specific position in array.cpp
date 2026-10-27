#include<iostream>
using namespace std;
void position( int arr[],int n, int idx)
{
    for ( int i=n;i>idx;i--)
    {
        arr[i]=arr[i-1];
    }

}
int main()
{
    int arr[100],i,n,idx,e;
    cout << "Enter the size of your array:";
    cin>> n;
    cout << "Elements you put on your array:";
    for (i=0;i<n;i++)
    {
        arr[i]=rand()%(1000-100+1)+100;
        cout << arr[i]<< " ";
    }
    cout << "\nEnter the index:";
    cin>>idx;

    cout << "\nEnter the elements to inserted:";
    cin>>e;
    position(arr,n,idx);
    arr[idx]=e;
    n++;
    cout << "\nAfter the insertion array is:";
    for (i=0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}
