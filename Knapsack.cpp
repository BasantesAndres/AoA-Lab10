#include <iostream>
using namespace std;

long long fibonacciRecursivo(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "The " << n << "th Fibonacci number is: " 
             << fibonacciRecursivo(n) << endl;
    }

    return 0;
}