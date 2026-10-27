 #include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int arr[100],n,i;
    cout << "Enter the size of your array:";
    cin>>n;
    cout << "Elements of your array:"<<endl;
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%(1000-100+1)+100;
        cout << arr[i]<< " ";

    }
    insertion_sort(arr,n);
    cout << "\nAfter the insertion sort array is:"<<endl;
    for (i=0;i<n;i++)
    {
        cout << arr[i]<< " ";

    }
    return 0;
}
