#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout << "Enter the the number up to natural number to be found:";
    cin >> n;

    cout << "Natural Numbers up to "<< n << " are:"<<endl;
    i=1;

    while (i<=n)
    {
        cout << i<< " ";
        i++;
    }

    return 0;
}
