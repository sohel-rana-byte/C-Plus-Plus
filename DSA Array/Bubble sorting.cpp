#include<iostream>

using namespace std;
void bubble_sort(int arr[],int n)//Function for bubble sort
{
    for (int i=0;i<n-1;i++)
    {
        for  (int j=0;j<n-i-1;j++)
        {
           if (arr[j]>arr[j+1])
               {
                   int temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
               }
        }

    }
}p
int main()
{
    int arr[100],n,i;

    cout << "Enter the size of your array:";
    cin >>n;

    cout<< "Elements you put on your array are:";

    for (i=0;i<n;i++)
    {
        arr[i]=rand()%(100-10+1)+10;
        cout << arr[i]<< " ";
    }

    bubble_sort(arr,n);

    cout << "\nAfter the bubble sort(Ascending)";
    for (i=0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
}
