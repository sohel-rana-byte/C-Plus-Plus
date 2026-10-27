#include<iostream>
using namespace std;

int main()
{
    int i;
    int b=10;
    i=&b;
    cout << "Memory address of the float data type:"<<i<<endl;
    return 0;
}






/*#include<iostream>
using namespace std;

int main()
{
    int i=10;
    float f=10.5;
    char c='A';

    float *ptr;
    ptr=&f;

    cout << "Address of Integer variable:"<<&i<<endl;
    cout << "Address of Floating variable:"<< &f<<endl;
    cout << "Address of the character variable:"<< &c  <<endl;
    cout << *ptr << endl;
    return 0;

}*/

/*#include<iostream>
using namespace std;

int main()
{
    int arr[100],i,n;
    cout << "Enter the size of the array:";
    cin>>n;
    cout << "Elements you put on your array:"<<endl;
    for(i=0;i<n;i++)
    {
        arr[i]=i+1;
        cout << arr[i]<< " ";
    }
    cout << "\nAddress of these element:"<<endl;
    for (i=0;i<n;i++)
    {
        cout << "Address of "<< *(arr+i)<< " is:"<< &arr[i]<<endl;
    }
    return 0;
}*/
