/*#include<iostream>
using namespace std;

int main()
{
    int arr[100],i,n;
    cout << "Enter the number up to which you want to expand your fibonacci Series:";
    cin>> n;
    arr[1]=1;
    arr[2]=1;
    cout << "FibonacciSeries up to the:"<<n<< " is:";
    cout << arr[1]<< " "<< arr[2]<< " ";
    for (i=3;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        cout << arr[i]<< " ";
    }
    return 0;
}*/
#include<iostream>
using namespace std;

int main() {
    int n, i, a, b, c;

    cout << "Enter the number to which you want to expand your Fibonacci Series: ";
    cin >> n;

    a = 1;
    b = 1;

    cout << "Fibonacci Series Up to " << n << " is: ";
    cout << a << " " << b << " ";

    for (i = 3; i <= n; i++) {
        c = a + b;
        cout << c << " ";

        // Update values for the next iteration
        a = b;
        b = c;
    }

    return 0;
}

