#include <iostream>
using namespace std;

// Function to calculate factorial iteratively
int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate factorial recursively
int factorialRecursive(int n) {
    if (n <= 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int number;

    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial (Iterative) of " << number << " is: " << factorialIterative(number) << endl;
        cout << "Factorial (Recursive) of " << number << " is: " << factorialRecursive(number) << endl;
    }

    return 0;
}

