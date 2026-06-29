#include <iostream>
using namespace std;

long long pow_int(long long x, int n) {
    if (n < 0) {
        cout << "Negative exponents are not supported for integers." << endl;
        return 0; 
    }

    long long ans = 1;
    while (n > 0) {
        if (n % 2 == 0) { 
            x = x * x;
            n /= 2;
        } else { 
            ans =ans* x;
            n--;
        }
    }
    return ans;
}

int main() {
    long long base;
    int exp;

    cout << "Enter base and exponent: ";
    if (!(cin >> base >> exp)) {
        cout << "Invalid input. Please enter integers only." << endl;
        return 1;
    }

    cout << base << "^" << exp << " = " << pow_int(base, exp) << endl;
    return 0;
}
