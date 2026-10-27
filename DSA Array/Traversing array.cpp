#include<iostream>
using namespace std;

 void traverse( int arr[],int n)
    {
        for (int i=0;i<n;i++)
        {
            arr[i]=rand()%(100-10+1)+10;
            cout << arr[i]<< " ";
        }
    }

int main()
{
    int arr[100],n,i;
    cout << " Enter the size of your array:";
    cin>>n;
    cout<< "Elements you put on your array are:";
    traverse(arr,n);
    return 0;
}
