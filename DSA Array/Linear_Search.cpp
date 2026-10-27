#include<bits/stdc++.h>
using namespace std;

ifstream infile ("Input_Linear.txt");
ofstream outfile("Output_Linear.txt");

int linear_search(int arr[],int n,int key)
{
    for (int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
           outfile<< "The Element" << key << " is found on the the index:"<< i<< endl;
           break;
            //return i;
        }
        else
        {
            outfile<< key << " is not found!";
            break;
        }

    }
//return -1;
}
int main()
{
    int arr[100];
    int i, n, key;


    infile>>n>>key;

    outfile << "Your array size is:"<< n << " & you have searched for:"<< key <<endl;

    for(i=0;i<n;i++)
    {
        infile>>arr[i];
    }
    int idx=linear_search(arr,n,key);

    /*if(idx !=-1)
        outfile << "The element:"<< key << " is on the index:"<<idx<<endl;
    else
    {
        outfile << key << " is not found!"<< endl;
    }*/

    return 0;

}
