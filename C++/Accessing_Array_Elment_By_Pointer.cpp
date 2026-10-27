/*#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n,i;
    cout << "Enter the size of your array:";
    cin>>n;
    cout << "Elements you put on your array is:"<<endl;
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%(100-10+1)+10;
        cout << arr[i]<< " ";
    }
    cout<< "\nMemory address of each element:"<<endl;
    for (i=0;i<n;i++)
    {
        cout << "Address of "<<*(arr+i)<< " is:"<< &arr[i]<<endl;
    }
    return 0;
}
*/
#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n,i;
    cout << "Enter the size of your array:";
    cin>>n;
    cout << "Elements you put on your array is:"<<endl;
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%(100-10+1)+10;
        cout << arr[i]<< " ";
    }
    cout<< "\nMemory address of each element:"<<endl;
    for (i=0;i<n;i++)
    {
        cout << "Address of "<< i[arr] << " is:"<< *(arr+i)<<endl;
    }
    return 0;
}

