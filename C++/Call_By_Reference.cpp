/*#include<iostream>
using namespace std;

void swapping(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout << "After swapping:"<<a<<","<<b;

}
int main()
{
    int x,y;
    cout << "Enter your two numbers:";
    cin>>x>>y;
    swapping(x,y);
}
*/
#include<iostream>
using namespace std;

void fun(int *ptr1,int *ptr2)
{
    *ptr1=10;
    *ptr2=20;
    cout << "Value of ptr1:"<<ptr1<< " and value of ptr2:"<<ptr2<<endl;

}
int main()
{
     int x,y;
     cout << "Enter your two numbers:";
     cin>> x>>y;

     fun(&x,&y);
     cout << "Value of x:"<<x<< " value of y:"<<y<<endl;
     return 0;
}
