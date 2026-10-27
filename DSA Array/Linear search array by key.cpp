#include<iostream>
using namespace std;

int main()
{
    int arr[100],i,n,data,flag=0;
    cout<< "Enter the amount of elements you want to put on your array:";
    cin>>n;
    cout << "Elements you put on your array are:";
    for (i=0;i<n;i++)
    {
        arr[i]=rand()%(100-20+1)+20;

        cout << arr[i]<< " ";
    }
        cout << "\nEnter the element you want to search:";
        cin>> data;
        for (i=0;i<n;i++)
        {
            if (arr[i]== data)
                flag=1;
        }
        if (flag==1)
        {
            cout << data<< " is present on the array.";
        }
        else
            cout << data << " is not in the array.";
        return 0;
}

