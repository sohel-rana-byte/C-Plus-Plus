#include<iostream>
using namespace std;

find_max(int a,int b,int c)
{
    int max=a;

    if(b>max)
        max=b;

    if (c>max)
        max=c;

       cout << "Greatest of these numbers is:"<< max << endl;
}

int main()
{
    int x,y,z;
    cout << "Enter your three numbers:";
    cin>>x>>y>>z;
    find_max(x,y,z);
    return 0;
}
