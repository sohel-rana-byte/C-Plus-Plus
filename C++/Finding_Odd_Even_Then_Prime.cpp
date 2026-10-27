#include<iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // If the number is divisible by any other number, it's not prime
        }
    }

    return true; // If no divisor is found, the number is prime
}

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " is an even number." << endl;
    } else {
        cout << n << " is an odd number." << endl;

        if (isPrime(n)) {
            cout << n << " is also a prime number." << endl;
        } else {
            cout << n << " is not a prime number." << endl;
        }
    }

    return 0;
}
