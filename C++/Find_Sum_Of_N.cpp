#include<iostream>
using namespace std;
int main()
{
    int N,i,sum=0;
    cout << "Enter the number up to for finding sum of first natural number:";
    cin>> N;
    i=1;
    while (i<=N)
    {
        sum+=i;
        i++;
    }
    cout << "Sum of these first " <<N<< " natural number:"<< sum<<endl;
    return 0;
}
