#include<iostream>
using namespace std;
int main()
{
    int n,i,j,f;
    cout << "Enter the number for finding factorial up to your given number:";
    cin >> n;
    cout << "Factorial of up to the given number "<<n<< " is:"<<endl;
    for (i=1;i<=n;i++)
    {

        f=1;
        for (j=1;j<=i;j++)
        {
            f=f*j;
        }
         cout << "Factorial of "<< i<< " is:" <<f<<endl;
    }

}
