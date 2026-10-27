#include<bits/stdc++.h>

using namespace std;
ifstream infile("Input_Insertion_Sort.txt");
    ofstream outfile("Output_Insertion_Sort.txt");

void insertion_sort(int arr[],int n)
{
    outfile<< "Elements you put on your array are:"<<endl;
    for (int i=0;i<n;i++)
    {
        arr[i]= rand()%(200-100+1)+100;
        outfile << arr[i] << " ";
    }
    for (int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    outfile<< "\nAfter insertion sort array would be:"<<endl;

    for (int i=0;i<n;i++)
    {
      outfile << arr[i]<< " ";
    }


}

int main()
{
    int arr[100],n,i;

    outfile<< "Enter the size of your array:";
    infile>> n;

    insertion_sort(arr,n);
    return 0;
}
