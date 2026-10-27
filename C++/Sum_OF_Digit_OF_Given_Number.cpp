#include<iostream>
using namespace std;

int main()
{
    int val, num, sum = 0;

    cout << "Enter the number : ";
    cin >> val;
    num = val;
    while (num != 0)
    {
        sum =+ num % 10;
        num /= 10;
    }
    cout << "The sum of the digits of "
         << val << " is " << sum;

    return 0;
}
