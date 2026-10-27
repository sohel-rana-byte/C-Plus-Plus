#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    ifstream infile("Input_GCD.txt");
    ofstream outfile("Output_GCD.txt");

    infile >>a >>b;
    outfile<< "For finding GCD you have enter these two numbers:"<< a << " & " << b<<endl;
    //cout << "For finding GCD you have enter these two numbers:"<< a << " & " << b<<endl;

    while (b !=0)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    outfile<< "GCD of these numbers is:"<< a<<endl;
   // cout << "GCD of these numbers is:"<< a<<endl;
    return 0;
}
