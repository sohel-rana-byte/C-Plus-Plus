#include<iostream>
using namespace std;

//void linear_search(int arr[],int n,int key)


int finding_index(int arr[],int n,int key)
{
   for(int i=0;i<n;i++)
   {
       if (arr[i]==key)
    {
        return i;
    }
   }

    return -1;
}

 void insertion_After_Specific_Element(int arr[],int n,int idx,int data)
 {
     for( int i=n;i>idx;i--)
     {
         arr[i]=arr[i-1];
     }
     arr[idx]=data;
     n++;
    cout << "After insertion array is:";
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
 }


int main()
{
    int arr[100],n,i,key,data;
    cout << "Enter the size of your array:";
    cin>>n;
    cout << "Elements you put on your array:";
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%(1000-10+1)+10;
        cout << arr[i]<< " ";
    }
    cout << "\nEnter the element to be searched:";
    cin>>key;
    int index=finding_index(arr,n,key);
    if(index!=-1)
    {
        cout << key << " is present on the index:"<<index<<endl;
    }
    else
        cout << key << " is not present on the array!";

        cout << "Enter the element to be inserted:";
        cin>>data;
        insertion_After_Specific_Element(arr,n,index,data);



    return 0;
}
